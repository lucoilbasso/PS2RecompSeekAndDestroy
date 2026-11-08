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

// Function: entry_001cfab0
// Address: 0x1cfab0 - 0x1cfb00
void entry_001cfab0_0x1cfab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfab0_0x1cfab0");
#endif

    ctx->pc = 0x1cfab0u;

    // 0x1cfab0: 0x2cc20200  sltiu       $v0, $a2, 0x200
    ctx->pc = 0x1cfab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1cfab4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CFAB4u;
    {
        const bool branch_taken_0x1cfab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAB4u;
        // 0x1cfab8: 0x61a42  srl         $v1, $a2, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfab4) {
            ctx->pc = 0x1CFB00u;
            return;
        }
    }
    ctx->pc = 0x1CFABCu;
    // 0x1cfabc: 0x628c2  srl         $a1, $a2, 3
    ctx->pc = 0x1cfabcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x1cfac0: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x1cfac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1cfac4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cfac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cfac8: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x1cfac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1cfacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfad0: 0x645821  addu        $t3, $v1, $a0
    ctx->pc = 0x1cfad0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cfad4: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x1cfad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1cfad8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1cfad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cfadc: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x1cfadcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1cfae0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cfae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cfae4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1cfae4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1cfae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1cfae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cfaec: 0xae0b000c  sw          $t3, 0xC($s0)
    ctx->pc = 0x1cfaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 11));
    // 0x1cfaf0: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x1cfaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x1cfaf4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1CFAF4u;
    {
        const bool branch_taken_0x1cfaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAF4u;
        // 0x1cfaf8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfaf4) {
            ctx->pc = 0x1CFBF0u;
            return;
        }
    }
    ctx->pc = 0x1CFAFCu;
    // 0x1cfafc: 0x0  nop
    ctx->pc = 0x1cfafcu;
    // NOP
    ctx->pc = 0x1cfb00u;
}
