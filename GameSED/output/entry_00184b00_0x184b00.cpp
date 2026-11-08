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

// Function: entry_00184b00
// Address: 0x184b00 - 0x184b38
void entry_00184b00_0x184b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184b00_0x184b00");
#endif

    switch (ctx->pc) {
        case 0x184b20u: goto label_184b20;
        default: break;
    }

    ctx->pc = 0x184b00u;

    // 0x184b00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x184b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x184b04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x184b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x184b08: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x184B08u;
    {
        const bool branch_taken_0x184b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184b08) {
            ctx->pc = 0x184B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184B08u;
            // 0x184b0c: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184B38u;
            return;
        }
    }
    ctx->pc = 0x184B10u;
    // 0x184b10: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x184b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x184b14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x184b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b18: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x184B18u;
    SET_GPR_U32(ctx, 31, 0x184B20u);
    ctx->pc = 0x184B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B18u;
    // 0x184b1c: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x184B18u, 0x184B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B20u;
label_184b20:
    // 0x184b20: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x184b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x184b24: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x184b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x184b28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x184b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x184b2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x184b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x184b30: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x184b30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x184b34: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x184b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x184b38u;
}
