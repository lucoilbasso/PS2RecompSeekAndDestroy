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

// Function: entry_001b5874
// Address: 0x1b5874 - 0x1b58a0
void entry_001b5874_0x1b5874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5874_0x1b5874");
#endif

    ctx->pc = 0x1b5874u;

    // 0x1b5874: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1b5874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b5878: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1b5878u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1b587c: 0x24e3b300  addiu       $v1, $a3, -0x4D00
    ctx->pc = 0x1b587cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947584));
    // 0x1b5880: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x1b5880u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40B304u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x40B304u, _value); } while (0);
    // 0x1b5884: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1b5884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b5888: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B5888u;
    {
        const bool branch_taken_0x1b5888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5888u;
        // 0x1b588c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5888) {
            ctx->pc = 0x1B58D0u;
            return;
        }
    }
    ctx->pc = 0x1B5890u;
    // 0x1b5890: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1b5890u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1b5894: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b5894u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b5898: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1b5898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b589c: 0x0  nop
    ctx->pc = 0x1b589cu;
    // NOP
    ctx->pc = 0x1b58a0u;
}
