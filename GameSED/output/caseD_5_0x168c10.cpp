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

// Function: caseD_5
// Address: 0x168c10 - 0x168c68
void caseD_5_0x168c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x168c10");
#endif

    ctx->pc = 0x168c10u;

    // 0x168c10: 0x10c0012f  beqz        $a2, . + 4 + (0x12F << 2)
    ctx->pc = 0x168C10u;
    {
        const bool branch_taken_0x168c10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C10u;
        // 0x168c14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c10) {
            ctx->pc = 0x1690D0u;
            return;
        }
    }
    ctx->pc = 0x168C18u;
    // 0x168c18: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x168c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x168c1c: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x168C1Cu;
    {
        const bool branch_taken_0x168c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C1Cu;
        // 0x168c20: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c1c) {
            ctx->pc = 0x168E84u;
            return;
        }
    }
    ctx->pc = 0x168C24u;
    // 0x168c24: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x168c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x168c28: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x168c28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x168c2c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x168c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x168c30: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x168c30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c34: 0xafb60220  sw          $s6, 0x220($sp)
    ctx->pc = 0x168c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 22));
    // 0x168c38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x168c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168c40: 0x24910180  addiu       $s1, $a0, 0x180
    ctx->pc = 0x168c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x168c44: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x168c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168c48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168c4c: 0xafb30224  sw          $s3, 0x224($sp)
    ctx->pc = 0x168c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 19));
    // 0x168c50: 0x18a0007e  blez        $a1, . + 4 + (0x7E << 2)
    ctx->pc = 0x168C50u;
    {
        const bool branch_taken_0x168c50 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x168C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C50u;
        // 0x168c54: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c50) {
            ctx->pc = 0x168E4Cu;
            return;
        }
    }
    ctx->pc = 0x168C58u;
    // 0x168c58: 0xc7958418  lwc1        $f21, -0x7BE8($gp)
    ctx->pc = 0x168c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x168c5c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x168c5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168c60: 0x27b601a0  addiu       $s6, $sp, 0x1A0
    ctx->pc = 0x168c60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x168c64: 0x0  nop
    ctx->pc = 0x168c64u;
    // NOP
    ctx->pc = 0x168c68u;
}
