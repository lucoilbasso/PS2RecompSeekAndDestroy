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

// Function: entry_0018fd3c
// Address: 0x18fd3c - 0x18fd88
void entry_0018fd3c_0x18fd3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fd3c_0x18fd3c");
#endif

    ctx->pc = 0x18fd3cu;

    // 0x18fd3c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x18fd3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18FD40u;
    {
        const bool branch_taken_0x18fd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD40u;
        // 0x18fd44: 0x25090020  addiu       $t1, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd40) {
            ctx->pc = 0x18FD88u;
            return;
        }
    }
    ctx->pc = 0x18FD48u;
    // 0x18fd48: 0x91420007  lbu         $v0, 0x7($t2)
    ctx->pc = 0x18fd48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x18fd4c: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x18fd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x18fd50: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x18fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18fd54: 0x25030030  addiu       $v1, $t0, 0x30
    ctx->pc = 0x18fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x18fd58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18fd5c: 0xfd240008  sd          $a0, 0x8($t1)
    ctx->pc = 0x18fd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x18fd60: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18fd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18fd64: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x18fd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18fd68: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x18fd68u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x18fd6c: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x18fd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x18fd70: 0x91440003  lbu         $a0, 0x3($t2)
    ctx->pc = 0x18fd70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x18fd74: 0x91420002  lbu         $v0, 0x2($t2)
    ctx->pc = 0x18fd74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x18fd78: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x18fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x18fd7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18fd80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18FD80u;
    {
        const bool branch_taken_0x18fd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD80u;
        // 0x18fd84: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd80) {
            ctx->pc = 0x18FDB8u;
            return;
        }
    }
    ctx->pc = 0x18FD88u;
}
