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

// Function: caseD_1
// Address: 0x1680b8 - 0x168108
void caseD_1_0x1680b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1680b8");
#endif

    ctx->pc = 0x1680b8u;

    // 0x1680b8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1680b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1680bc: 0x14400371  bnez        $v0, . + 4 + (0x371 << 2)
    ctx->pc = 0x1680BCu;
    {
        const bool branch_taken_0x1680bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1680C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680BCu;
        // 0x1680c0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680bc) {
            ctx->pc = 0x168E84u;
            return;
        }
    }
    ctx->pc = 0x1680C4u;
    // 0x1680c4: 0x10c0008c  beqz        $a2, . + 4 + (0x8C << 2)
    ctx->pc = 0x1680C4u;
    {
        const bool branch_taken_0x1680c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1680C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680C4u;
        // 0x1680c8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680c4) {
            ctx->pc = 0x1682F8u;
            return;
        }
    }
    ctx->pc = 0x1680CCu;
    // 0x1680cc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1680d0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1680d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1680d4: 0xafb601f8  sw          $s6, 0x1F8($sp)
    ctx->pc = 0x1680d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 22));
    // 0x1680d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1680d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1680dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1680dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1680e0: 0x8fb701e0  lw          $s7, 0x1E0($sp)
    ctx->pc = 0x1680e0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1680e4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1680e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1680e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1680e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1680ec: 0xafb301fc  sw          $s3, 0x1FC($sp)
    ctx->pc = 0x1680ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 19));
    // 0x1680f0: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x1680f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1680f4: 0x18a0007d  blez        $a1, . + 4 + (0x7D << 2)
    ctx->pc = 0x1680F4u;
    {
        const bool branch_taken_0x1680f4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1680F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680F4u;
        // 0x1680f8: 0x249100c0  addiu       $s1, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680f4) {
            ctx->pc = 0x1682ECu;
            return;
        }
    }
    ctx->pc = 0x1680FCu;
    // 0x1680fc: 0xc7948400  lwc1        $f20, -0x7C00($gp)
    ctx->pc = 0x1680fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x168100: 0x27b600b0  addiu       $s6, $sp, 0xB0
    ctx->pc = 0x168100u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x168104: 0x0  nop
    ctx->pc = 0x168104u;
    // NOP
    ctx->pc = 0x168108u;
}
