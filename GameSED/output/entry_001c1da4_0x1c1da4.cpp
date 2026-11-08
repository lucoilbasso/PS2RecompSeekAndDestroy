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

// Function: entry_001c1da4
// Address: 0x1c1da4 - 0x1c1de0
void entry_001c1da4_0x1c1da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1da4_0x1c1da4");
#endif

    ctx->pc = 0x1c1da4u;

    // 0x1c1da4: 0xae22083c  sw          $v0, 0x83C($s1)
    ctx->pc = 0x1c1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 2));
    // 0x1c1da8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1c1da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c1dac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c1dacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c1db0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1c1db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1c1db4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1db4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c1db8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c1dbc: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x1c1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    // 0x1c1dc0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1c1dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1c1dc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c1dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1dc8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c1dc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1dcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c1dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1dd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c1dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DD8u;
        // 0x1c1ddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1DE0u;
}
