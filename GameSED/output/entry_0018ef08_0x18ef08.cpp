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

// Function: entry_0018ef08
// Address: 0x18ef08 - 0x18ef44
void entry_0018ef08_0x18ef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef08_0x18ef08");
#endif

    switch (ctx->pc) {
        case 0x18ef30u: goto label_18ef30;
        default: break;
    }

    ctx->pc = 0x18ef08u;

    // 0x18ef08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18ef0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18ef10: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18ef10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18ef18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18ef18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EF1Cu;
    {
        const bool branch_taken_0x18ef1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF1Cu;
        // 0x18ef20: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef1c) {
            ctx->pc = 0x18EF44u;
            return;
        }
    }
    ctx->pc = 0x18EF24u;
    // 0x18ef24: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x18ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x18ef28: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x18EF28u;
    SET_GPR_U32(ctx, 31, 0x18EF30u);
    ctx->pc = 0x18EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF28u;
    // 0x18ef2c: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x18EF28u, 0x18EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF30u;
label_18ef30:
    // 0x18ef30: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18ef30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18ef34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef38: 0x24a58158  addiu       $a1, $a1, -0x7EA8
    ctx->pc = 0x18ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934872));
    // 0x18ef3c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18EF3Cu;
    SET_GPR_U32(ctx, 31, 0x18EF44u);
    ctx->pc = 0x18EF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF3Cu;
    // 0x18ef40: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18EF3Cu, 0x18EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF44u;
}
