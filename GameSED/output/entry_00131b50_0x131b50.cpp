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

// Function: entry_00131b50
// Address: 0x131b50 - 0x131b90
void entry_00131b50_0x131b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131b50_0x131b50");
#endif

    ctx->pc = 0x131b50u;

    // 0x131b50: 0x52000030  beql        $s0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x131B50u;
    {
        const bool branch_taken_0x131b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131b50) {
            ctx->pc = 0x131B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131B50u;
            // 0x131b54: 0xae340134  sw          $s4, 0x134($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C14u;
            return;
        }
    }
    ctx->pc = 0x131B58u;
    // 0x131b58: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x131b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x131b5c: 0x5451002d  bnel        $v0, $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x131B5Cu;
    {
        const bool branch_taken_0x131b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x131b5c) {
            ctx->pc = 0x131B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131B5Cu;
            // 0x131b60: 0xae340134  sw          $s4, 0x134($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C14u;
            return;
        }
    }
    ctx->pc = 0x131B64u;
    // 0x131b64: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x131b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x131b68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x131b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b6c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x131B6Cu;
    {
        const bool branch_taken_0x131b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B6Cu;
        // 0x131b70: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b6c) {
            ctx->pc = 0x131C0Cu;
            return;
        }
    }
    ctx->pc = 0x131B74u;
    // 0x131b74: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x131b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x131b78: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x131b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x131b7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x131b80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x131b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x131b84: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x131b84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131b88: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x131b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x131b8c: 0x0  nop
    ctx->pc = 0x131b8cu;
    // NOP
    ctx->pc = 0x131b90u;
}
