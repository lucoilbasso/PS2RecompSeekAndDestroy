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

// Function: entry_00131908
// Address: 0x131908 - 0x131938
void entry_00131908_0x131908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131908_0x131908");
#endif

    ctx->pc = 0x131908u;

    // 0x131908: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x131908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13190c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x13190cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131910: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x131910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131914: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x131914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x131918: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x131918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13191c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x13191cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x131920: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x131920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131924: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x131924u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x131928: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x131928u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13192c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x13192cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x131930: 0x3e00008  jr          $ra
    ctx->pc = 0x131930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131930u;
        // 0x131934: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131938u;
}
