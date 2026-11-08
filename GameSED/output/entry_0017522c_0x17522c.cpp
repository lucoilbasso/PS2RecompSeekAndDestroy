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

// Function: entry_0017522c
// Address: 0x17522c - 0x175248
void entry_0017522c_0x17522c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017522c_0x17522c");
#endif

    ctx->pc = 0x17522cu;

    // 0x17522c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x17522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x175230: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x175230u;
    {
        const bool branch_taken_0x175230 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x175234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175230u;
        // 0x175234: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175230) {
            ctx->pc = 0x175280u;
            return;
        }
    }
    ctx->pc = 0x175238u;
    // 0x175238: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x175238u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x17523c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x17523cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x175240: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175244: 0x0  nop
    ctx->pc = 0x175244u;
    // NOP
    ctx->pc = 0x175248u;
}
