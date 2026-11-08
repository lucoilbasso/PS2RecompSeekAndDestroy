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

// Function: entry_00179fa8
// Address: 0x179fa8 - 0x179fd0
void entry_00179fa8_0x179fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179fa8_0x179fa8");
#endif

    ctx->pc = 0x179fa8u;

    // 0x179fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179fac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x179facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179fb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x179fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179fb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x179fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179fb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x179fb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179fbc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x179fbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179fc0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x179fc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179fc4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x179fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x179FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FC8u;
        // 0x179fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179FD0u;
}
