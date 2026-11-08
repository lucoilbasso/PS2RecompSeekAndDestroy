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

// Function: entry_0017e26c
// Address: 0x17e26c - 0x17e2b8
void entry_0017e26c_0x17e26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e26c_0x17e26c");
#endif

    ctx->pc = 0x17e26cu;

    // 0x17e26c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x17e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17e270: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x17e270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x17e274: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17e274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17e278: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17e278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e27c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17e27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17e280: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x17e280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x17e284: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17e284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17e288: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x17e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17e28c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x17E28Cu;
    {
        const bool branch_taken_0x17e28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E28Cu;
        // 0x17e290: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e28c) {
            ctx->pc = 0x17E380u;
            return;
        }
    }
    ctx->pc = 0x17E294u;
    // 0x17e294: 0x96420022  lhu         $v0, 0x22($s2)
    ctx->pc = 0x17e294u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x17e298: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x17E298u;
    {
        const bool branch_taken_0x17e298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e298) {
            ctx->pc = 0x17E29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E298u;
            // 0x17e29c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E384u;
            return;
        }
    }
    ctx->pc = 0x17E2A0u;
    // 0x17e2a0: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x17e2a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2a4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x17E2A4u;
    {
        const bool branch_taken_0x17e2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2A4u;
        // 0x17e2a8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2a4) {
            ctx->pc = 0x17E380u;
            return;
        }
    }
    ctx->pc = 0x17E2ACu;
    // 0x17e2ac: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x17e2acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x17e2b0: 0x37de0006  ori         $fp, $fp, 0x6
    ctx->pc = 0x17e2b0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)6);
    // 0x17e2b4: 0x0  nop
    ctx->pc = 0x17e2b4u;
    // NOP
    ctx->pc = 0x17e2b8u;
}
