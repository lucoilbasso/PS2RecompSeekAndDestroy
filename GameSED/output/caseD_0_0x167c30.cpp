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

// Function: caseD_0
// Address: 0x167c30 - 0x167c80
void caseD_0_0x167c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x167c30");
#endif

    ctx->pc = 0x167c30u;

    // 0x167c30: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x167c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x167c34: 0x54400493  bnel        $v0, $zero, . + 4 + (0x493 << 2)
    ctx->pc = 0x167C34u;
    {
        const bool branch_taken_0x167c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167c34) {
            ctx->pc = 0x167C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167C34u;
            // 0x167c38: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E84u;
            return;
        }
    }
    ctx->pc = 0x167C3Cu;
    // 0x167c3c: 0x10c00526  beqz        $a2, . + 4 + (0x526 << 2)
    ctx->pc = 0x167C3Cu;
    {
        const bool branch_taken_0x167c3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C3Cu;
        // 0x167c40: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c3c) {
            ctx->pc = 0x1690D8u;
            return;
        }
    }
    ctx->pc = 0x167C44u;
    // 0x167c44: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x167c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x167c48: 0xafb601e4  sw          $s6, 0x1E4($sp)
    ctx->pc = 0x167c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 22));
    // 0x167c4c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x167c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x167c50: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x167c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x167c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167c58: 0xafb301e8  sw          $s3, 0x1E8($sp)
    ctx->pc = 0x167c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 19));
    // 0x167c5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x167c60: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x167c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167c64: 0x24910060  addiu       $s1, $a0, 0x60
    ctx->pc = 0x167c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x167c68: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x167c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x167c6c: 0x18a00081  blez        $a1, . + 4 + (0x81 << 2)
    ctx->pc = 0x167C6Cu;
    {
        const bool branch_taken_0x167c6c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x167C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C6Cu;
        // 0x167c70: 0xafa001ec  sw          $zero, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c6c) {
            ctx->pc = 0x167E74u;
            return;
        }
    }
    ctx->pc = 0x167C74u;
    // 0x167c74: 0xc79483f4  lwc1        $f20, -0x7C0C($gp)
    ctx->pc = 0x167c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167c78: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x167c78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167c7c: 0x0  nop
    ctx->pc = 0x167c7cu;
    // NOP
    ctx->pc = 0x167c80u;
}
