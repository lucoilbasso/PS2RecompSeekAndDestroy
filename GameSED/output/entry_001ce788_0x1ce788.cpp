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

// Function: entry_001ce788
// Address: 0x1ce788 - 0x1ce7cc
void entry_001ce788_0x1ce788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce788_0x1ce788");
#endif

    ctx->pc = 0x1ce788u;

    // 0x1ce788: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ce788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce78c: 0x14e2000f  bne         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CE78Cu;
    {
        const bool branch_taken_0x1ce78c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE78Cu;
        // 0x1ce790: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce78c) {
            ctx->pc = 0x1CE7CCu;
            return;
        }
    }
    ctx->pc = 0x1CE794u;
    // 0x1ce794: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ce798: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1ce798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ce79c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x1ce79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ce7a0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CE7A0u;
    {
        const bool branch_taken_0x1ce7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7a0) {
            ctx->pc = 0x1CE7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE7A0u;
            // 0x1ce7a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE7CCu;
            return;
        }
    }
    ctx->pc = 0x1CE7A8u;
    // 0x1ce7a8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1ce7a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ce7ac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE7ACu;
    {
        const bool branch_taken_0x1ce7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7ACu;
        // 0x1ce7b0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7ac) {
            ctx->pc = 0x1CE7E4u;
            return;
        }
    }
    ctx->pc = 0x1CE7B4u;
    // 0x1ce7b4: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x1ce7b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ce7b8: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x1ce7b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ce7bc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1ce7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ce7c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE7C0u;
    {
        const bool branch_taken_0x1ce7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7c0) {
            ctx->pc = 0x1CE7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE7C0u;
            // 0x1ce7c4: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE7D8u;
            return;
        }
    }
    ctx->pc = 0x1CE7C8u;
    // 0x1ce7c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ce7ccu;
}
