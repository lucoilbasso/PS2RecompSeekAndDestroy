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

// Function: entry_00167a48
// Address: 0x167a48 - 0x167a98
void entry_00167a48_0x167a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167a48_0x167a48");
#endif

    ctx->pc = 0x167a48u;

label_167a48:
    // 0x167a48: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x167a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x167a4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x167a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167a50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x167a54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x167a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167a58: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x167a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x167a5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x167a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x167a60: 0x2883000c  slti        $v1, $a0, 0xC
    ctx->pc = 0x167a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x167a64: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x167A64u;
    {
        const bool branch_taken_0x167a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A64u;
        // 0x167a68: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a64) {
            ctx->pc = 0x167A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167a48;
        }
    }
    ctx->pc = 0x167A6Cu;
    // 0x167a6c: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x167a6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a70: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x167a70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a74: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x167a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x167a78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x167a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x167a7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x167a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a80: 0x18600065  blez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x167A80u;
    {
        const bool branch_taken_0x167a80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x167A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A80u;
        // 0x167a84: 0x24500030  addiu       $s0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a80) {
            ctx->pc = 0x167C18u;
            return;
        }
    }
    ctx->pc = 0x167A88u;
    // 0x167a88: 0xc79483f0  lwc1        $f20, -0x7C10($gp)
    ctx->pc = 0x167a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167a8c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167a90: 0x26720018  addiu       $s2, $s3, 0x18
    ctx->pc = 0x167a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x167a94: 0x0  nop
    ctx->pc = 0x167a94u;
    // NOP
    ctx->pc = 0x167a98u;
}
