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

// Function: caseD_4
// Address: 0x1689c8 - 0x168a20
void caseD_4_0x1689c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1689c8");
#endif

    ctx->pc = 0x1689c8u;

    // 0x1689c8: 0x10c001c1  beqz        $a2, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x1689C8u;
    {
        const bool branch_taken_0x1689c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689C8u;
        // 0x1689cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689c8) {
            ctx->pc = 0x1690D0u;
            return;
        }
    }
    ctx->pc = 0x1689D0u;
    // 0x1689d0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1689d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1689d4: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x1689D4u;
    {
        const bool branch_taken_0x1689d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1689D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689D4u;
        // 0x1689d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689d4) {
            ctx->pc = 0x168E84u;
            return;
        }
    }
    ctx->pc = 0x1689DCu;
    // 0x1689dc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1689dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1689e0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1689e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1689e4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1689e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1689e8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1689e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689ec: 0xafb60218  sw          $s6, 0x218($sp)
    ctx->pc = 0x1689ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 22));
    // 0x1689f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1689f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1689f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1689f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1689f8: 0x24910150  addiu       $s1, $a0, 0x150
    ctx->pc = 0x1689f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1689fc: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1689fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168a00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168a04: 0xafb3021c  sw          $s3, 0x21C($sp)
    ctx->pc = 0x168a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 19));
    // 0x168a08: 0x18a0007e  blez        $a1, . + 4 + (0x7E << 2)
    ctx->pc = 0x168A08u;
    {
        const bool branch_taken_0x168a08 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x168A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A08u;
        // 0x168a0c: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a08) {
            ctx->pc = 0x168C04u;
            return;
        }
    }
    ctx->pc = 0x168A10u;
    // 0x168a10: 0xc7958414  lwc1        $f21, -0x7BEC($gp)
    ctx->pc = 0x168a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x168a14: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x168a14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168a18: 0x27b60170  addiu       $s6, $sp, 0x170
    ctx->pc = 0x168a18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x168a1c: 0x0  nop
    ctx->pc = 0x168a1cu;
    // NOP
    ctx->pc = 0x168a20u;
}
