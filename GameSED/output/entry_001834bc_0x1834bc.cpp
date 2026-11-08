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

// Function: entry_001834bc
// Address: 0x1834bc - 0x1834f0
void entry_001834bc_0x1834bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001834bc_0x1834bc");
#endif

    ctx->pc = 0x1834bcu;

    // 0x1834bc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1834bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1834c0: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x1834c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1834c4: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x1834c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1834c8: 0xa6040028  sh          $a0, 0x28($s0)
    ctx->pc = 0x1834c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x1834cc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1834ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1834d0: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1834d0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1834d4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1834d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1834d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1834d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834dc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1834dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1834e0: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x1834e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x1834e4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1834E4u;
    {
        const bool branch_taken_0x1834e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834E4u;
        // 0x1834e8: 0x32b83  sra         $a1, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834e4) {
            ctx->pc = 0x1834F0u;
            return;
        }
    }
    ctx->pc = 0x1834ECu;
    // 0x1834ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1834ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1834f0u;
}
