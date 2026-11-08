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

// Function: caseD_2
// Address: 0x168540 - 0x168590
void caseD_2_0x168540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x168540");
#endif

    ctx->pc = 0x168540u;

    // 0x168540: 0x10c002e3  beqz        $a2, . + 4 + (0x2E3 << 2)
    ctx->pc = 0x168540u;
    {
        const bool branch_taken_0x168540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x168544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168540u;
        // 0x168544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168540) {
            ctx->pc = 0x1690D0u;
            return;
        }
    }
    ctx->pc = 0x168548u;
    // 0x168548: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x168548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x16854c: 0x1440024d  bnez        $v0, . + 4 + (0x24D << 2)
    ctx->pc = 0x16854Cu;
    {
        const bool branch_taken_0x16854c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16854Cu;
        // 0x168550: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16854c) {
            ctx->pc = 0x168E84u;
            return;
        }
    }
    ctx->pc = 0x168554u;
    // 0x168554: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x168554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x168558: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x168558u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16855c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x16855cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x168560: 0xafb60208  sw          $s6, 0x208($sp)
    ctx->pc = 0x168560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 22));
    // 0x168564: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x168564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16856c: 0x8fb701e0  lw          $s7, 0x1E0($sp)
    ctx->pc = 0x16856cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x168570: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x168570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168574: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168578: 0xafb3020c  sw          $s3, 0x20C($sp)
    ctx->pc = 0x168578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 19));
    // 0x16857c: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x16857cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168580: 0x18a0007c  blez        $a1, . + 4 + (0x7C << 2)
    ctx->pc = 0x168580u;
    {
        const bool branch_taken_0x168580 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x168584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168580u;
        // 0x168584: 0x249100f0  addiu       $s1, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168580) {
            ctx->pc = 0x168774u;
            return;
        }
    }
    ctx->pc = 0x168588u;
    // 0x168588: 0xc794840c  lwc1        $f20, -0x7BF4($gp)
    ctx->pc = 0x168588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16858c: 0x27b60110  addiu       $s6, $sp, 0x110
    ctx->pc = 0x16858cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->pc = 0x168590u;
}
