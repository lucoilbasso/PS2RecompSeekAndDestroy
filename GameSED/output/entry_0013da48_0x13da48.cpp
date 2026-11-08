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

// Function: entry_0013da48
// Address: 0x13da48 - 0x13da98
void entry_0013da48_0x13da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013da48_0x13da48");
#endif

    ctx->pc = 0x13da48u;

    // 0x13da48: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x13da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x13da4c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x13da4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da50: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x13da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x13da54: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x13da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x13da58: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x13da58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x13da5c: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x13da5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x13da60: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x13da60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x13da64: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x13da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x13da68: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x13da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x13da6c: 0x8fd50014  lw          $s5, 0x14($fp)
    ctx->pc = 0x13da6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x13da70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13DA70u;
    {
        const bool branch_taken_0x13da70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA70u;
        // 0x13da74: 0x8fd60018  lw          $s6, 0x18($fp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da70) {
            ctx->pc = 0x13DA98u;
            return;
        }
    }
    ctx->pc = 0x13DA78u;
    // 0x13da78: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x13da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x13da7c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13da80: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13da80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13da84: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13da84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13da88: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x13da88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13da8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13DA8Cu;
    {
        const bool branch_taken_0x13da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA8Cu;
        // 0x13da90: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da8c) {
            ctx->pc = 0x13DACCu;
            return;
        }
    }
    ctx->pc = 0x13DA94u;
    // 0x13da94: 0x0  nop
    ctx->pc = 0x13da94u;
    // NOP
    ctx->pc = 0x13da98u;
}
