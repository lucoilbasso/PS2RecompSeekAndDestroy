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

// Function: entry_001d57c0
// Address: 0x1d57c0 - 0x1d57f8
void entry_001d57c0_0x1d57c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d57c0_0x1d57c0");
#endif

    ctx->pc = 0x1d57c0u;

    // 0x1d57c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d57c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d57c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d57c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d57c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d57c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d57cc: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x1d57ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d57d0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x1d57d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d57d4: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x1d57d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d57d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D57D8u;
    {
        const bool branch_taken_0x1d57d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d57d8) {
            ctx->pc = 0x1D57DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D57D8u;
            // 0x1d57dc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D57F8u;
            return;
        }
    }
    ctx->pc = 0x1D57E0u;
    // 0x1d57e0: 0x200c02d  daddu       $t8, $s0, $zero
    ctx->pc = 0x1d57e0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57e4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1d57e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57e8: 0x300902d  daddu       $s2, $t8, $zero
    ctx->pc = 0x1d57e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57ec: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1d57ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57f0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x1d57f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d57f4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1d57f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1d57f8u;
}
