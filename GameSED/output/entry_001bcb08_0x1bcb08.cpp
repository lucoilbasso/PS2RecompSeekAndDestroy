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

// Function: entry_001bcb08
// Address: 0x1bcb08 - 0x1bcb40
void entry_001bcb08_0x1bcb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcb08_0x1bcb08");
#endif

    switch (ctx->pc) {
        case 0x1bcb14u: goto label_1bcb14;
        default: break;
    }

    ctx->pc = 0x1bcb08u;

    // 0x1bcb08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bcb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb0c: 0xc06f3de  jal         func_1BCF78
    ctx->pc = 0x1BCB0Cu;
    SET_GPR_U32(ctx, 31, 0x1BCB14u);
    ctx->pc = 0x1BCB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB0Cu;
    // 0x1bcb10: 0x26460018  addiu       $a2, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCF78u, 0x1BCB0Cu, 0x1BCB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB14u;
label_1bcb14:
    // 0x1bcb14: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1bcb14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bcb18: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1bcb18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bcb1c: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1BCB1Cu;
    {
        const bool branch_taken_0x1bcb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB1Cu;
        // 0x1bcb20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb1c) {
            ctx->pc = 0x1BCBECu;
            return;
        }
    }
    ctx->pc = 0x1BCB24u;
    // 0x1bcb24: 0x8e840048  lw          $a0, 0x48($s4)
    ctx->pc = 0x1bcb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1bcb28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bcb28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb2c: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BCB2Cu;
    {
        const bool branch_taken_0x1bcb2c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1BCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB2Cu;
        // 0x1bcb30: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb2c) {
            ctx->pc = 0x1BCB70u;
            return;
        }
    }
    ctx->pc = 0x1BCB34u;
    // 0x1bcb34: 0xde450018  ld          $a1, 0x18($s2)
    ctx->pc = 0x1bcb34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bcb38: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1bcb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1bcb3c: 0x0  nop
    ctx->pc = 0x1bcb3cu;
    // NOP
    ctx->pc = 0x1bcb40u;
}
