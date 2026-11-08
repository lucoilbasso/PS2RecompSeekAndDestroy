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

// Function: entry_001808d0
// Address: 0x1808d0 - 0x18091c
void entry_001808d0_0x1808d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001808d0_0x1808d0");
#endif

    ctx->pc = 0x1808d0u;

    // 0x1808d0: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1808d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1808d4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x1808d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x1808d8: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x1808d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1808dc: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x1808dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1808e0: 0x8f0d0010  lw          $t5, 0x10($t8)
    ctx->pc = 0x1808e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x1808e4: 0x2479dbf0  addiu       $t9, $v1, -0x2410
    ctx->pc = 0x1808e4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958064));
    // 0x1808e8: 0x8f0f0014  lw          $t7, 0x14($t8)
    ctx->pc = 0x1808e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x1808ec: 0x8f060018  lw          $a2, 0x18($t8)
    ctx->pc = 0x1808ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x1808f0: 0x8f08001c  lw          $t0, 0x1C($t8)
    ctx->pc = 0x1808f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x1808f4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1808f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0);
    // 0x1808f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1808f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x1808fc: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1808FCu;
    {
        const bool branch_taken_0x1808fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x180900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808FCu;
        // 0x180900: 0xa0440020  sb          $a0, 0x20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808fc) {
            ctx->pc = 0x18091Cu;
            return;
        }
    }
    ctx->pc = 0x180904u;
    // 0x180904: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x180904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x180908: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x180908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x18090c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x18090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x180910: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x180910u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x180914: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180918: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x180918u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    ctx->pc = 0x18091cu;
}
