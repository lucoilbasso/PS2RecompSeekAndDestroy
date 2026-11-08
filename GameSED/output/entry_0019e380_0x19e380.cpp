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

// Function: entry_0019e380
// Address: 0x19e380 - 0x19e3c0
void entry_0019e380_0x19e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e380_0x19e380");
#endif

    ctx->pc = 0x19e380u;

    // 0x19e380: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x19e380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19e384: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x19e384u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x19e388: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x19e388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e38c: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x19e38cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x19e390: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x19e390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e394: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x19e394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e398: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E398u;
    {
        const bool branch_taken_0x19e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E398u;
        // 0x19e39c: 0x90a60003  lbu         $a2, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e398) {
            ctx->pc = 0x19E3C0u;
            return;
        }
    }
    ctx->pc = 0x19E3A0u;
    // 0x19e3a0: 0x671023  subu        $v0, $v1, $a3
    ctx->pc = 0x19e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19e3a4: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e3a4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e3a8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e3ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e3b0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e3b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19E3B4u;
    {
        const bool branch_taken_0x19e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3B4u;
        // 0x19e3b8: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3b4) {
            ctx->pc = 0x19E3E8u;
            return;
        }
    }
    ctx->pc = 0x19E3BCu;
    // 0x19e3bc: 0x0  nop
    ctx->pc = 0x19e3bcu;
    // NOP
    ctx->pc = 0x19e3c0u;
}
