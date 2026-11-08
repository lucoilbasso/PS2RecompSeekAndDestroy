#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: default
// Address: 0x134684 - 0x1346bc
void ps2_default_0x134684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x134684");
#endif

    switch (ctx->pc) {
        case 0x13468cu: goto label_13468c;
        default: break;
    }

    ctx->pc = 0x134684u;

    // 0x134684: 0xc04171a  jal         func_105C68
    ctx->pc = 0x134684u;
    SET_GPR_U32(ctx, 31, 0x13468Cu);
    ctx->pc = 0x134688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134684u;
    // 0x134688: 0xaf918a30  sw          $s1, -0x75D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x134684u, 0x13468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13468Cu;
label_13468c:
    // 0x13468c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x13468cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134690: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x134690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x134694: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x134694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134698: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x134698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13469c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x13469cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1346a0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1346a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1346a4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1346a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1346a8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1346a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1346ac: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1346acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1346b0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1346b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1346b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1346B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1346B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346B4u;
        // 0x1346b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1346B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1346BCu;
}
