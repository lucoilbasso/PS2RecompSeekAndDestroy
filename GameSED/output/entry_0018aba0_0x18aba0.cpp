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

// Function: entry_0018aba0
// Address: 0x18aba0 - 0x18abf0
void entry_0018aba0_0x18aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aba0_0x18aba0");
#endif

    ctx->pc = 0x18aba0u;

    // 0x18aba0: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x18aba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x18aba4: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x18aba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x18aba8: 0x8ca6015c  lw          $a2, 0x15C($a1)
    ctx->pc = 0x18aba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x18abac: 0x96a20150  lhu         $v0, 0x150($s5)
    ctx->pc = 0x18abacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 336)));
    // 0x18abb0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x18abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18abb4: 0x8fc50094  lw          $a1, 0x94($fp)
    ctx->pc = 0x18abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 148)));
    // 0x18abb8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18abb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18abbc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18abbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x18abc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18abc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18abc4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x18abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x18abc8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18ABC8u;
    {
        const bool branch_taken_0x18abc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABC8u;
        // 0x18abcc: 0x2c730001  sltiu       $s3, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abc8) {
            ctx->pc = 0x18ABF0u;
            return;
        }
    }
    ctx->pc = 0x18ABD0u;
    // 0x18abd0: 0x8fc20098  lw          $v0, 0x98($fp)
    ctx->pc = 0x18abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 152)));
    // 0x18abd4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x18abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18abd8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18abdc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18abdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18abe0: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x18abe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x18abe4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18ABE4u;
    {
        const bool branch_taken_0x18abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABE4u;
        // 0x18abe8: 0xafc30098  sw          $v1, 0x98($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abe4) {
            ctx->pc = 0x18AC24u;
            return;
        }
    }
    ctx->pc = 0x18ABECu;
    // 0x18abec: 0x0  nop
    ctx->pc = 0x18abecu;
    // NOP
    ctx->pc = 0x18abf0u;
}
