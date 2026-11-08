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

// Function: caseD_3
// Address: 0x168780 - 0x1687d8
void caseD_3_0x168780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x168780");
#endif

    ctx->pc = 0x168780u;

    // 0x168780: 0x10c00253  beqz        $a2, . + 4 + (0x253 << 2)
    ctx->pc = 0x168780u;
    {
        const bool branch_taken_0x168780 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x168784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168780u;
        // 0x168784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168780) {
            ctx->pc = 0x1690D0u;
            return;
        }
    }
    ctx->pc = 0x168788u;
    // 0x168788: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x168788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x16878c: 0x144001bd  bnez        $v0, . + 4 + (0x1BD << 2)
    ctx->pc = 0x16878Cu;
    {
        const bool branch_taken_0x16878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16878Cu;
        // 0x168790: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16878c) {
            ctx->pc = 0x168E84u;
            return;
        }
    }
    ctx->pc = 0x168794u;
    // 0x168794: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x168794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x168798: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x168798u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x16879c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x16879cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1687a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1687a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687a4: 0xafb60210  sw          $s6, 0x210($sp)
    ctx->pc = 0x1687a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 22));
    // 0x1687a8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1687a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1687ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1687acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1687b0: 0x24910120  addiu       $s1, $a0, 0x120
    ctx->pc = 0x1687b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1687b4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1687b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1687b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1687b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1687bc: 0xafb30214  sw          $s3, 0x214($sp)
    ctx->pc = 0x1687bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 19));
    // 0x1687c0: 0x18a0007e  blez        $a1, . + 4 + (0x7E << 2)
    ctx->pc = 0x1687C0u;
    {
        const bool branch_taken_0x1687c0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1687C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687C0u;
        // 0x1687c4: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687c0) {
            ctx->pc = 0x1689BCu;
            return;
        }
    }
    ctx->pc = 0x1687C8u;
    // 0x1687c8: 0xc7958410  lwc1        $f21, -0x7BF0($gp)
    ctx->pc = 0x1687c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1687cc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1687ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1687d0: 0x27b60140  addiu       $s6, $sp, 0x140
    ctx->pc = 0x1687d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1687d4: 0x0  nop
    ctx->pc = 0x1687d4u;
    // NOP
    ctx->pc = 0x1687d8u;
}
