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

// Function: ClassJobRegist__9ApcCqpartUi
// Address: 0x1db1e0 - 0x1db230
void ClassJobRegist__9ApcCqpartUi_0x1db1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRegist__9ApcCqpartUi_0x1db1e0");
#endif

    switch (ctx->pc) {
        case 0x1db210u: goto label_1db210;
        default: break;
    }

    ctx->pc = 0x1db1e0u;

    // 0x1db1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db1e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db1f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1db1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db1f8: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x1db1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x1db1fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB1FCu;
    {
        const bool branch_taken_0x1db1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1FCu;
        // 0x1db200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1fc) {
            ctx->pc = 0x1DB214u;
            goto label_1db214;
        }
    }
    ctx->pc = 0x1DB204u;
    // 0x1db204: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1db204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1db208: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DB208u;
    SET_GPR_U32(ctx, 31, 0x1DB210u);
    ctx->pc = 0x1DB20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB208u;
    // 0x1db20c: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DB208u, 0x1DB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB210u;
label_1db210:
    // 0x1db210: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x1db210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_1db214:
    // 0x1db214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db218: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1db218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1db21c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db220: 0xae020c04  sw          $v0, 0xC04($s0)
    ctx->pc = 0x1db220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
    // 0x1db224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db228: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB228u;
        // 0x1db22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB230u;
}
