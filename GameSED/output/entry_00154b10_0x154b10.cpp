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

// Function: entry_00154b10
// Address: 0x154b10 - 0x154b48
void entry_00154b10_0x154b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154b10_0x154b10");
#endif

    switch (ctx->pc) {
        case 0x154b3cu: goto label_154b3c;
        default: break;
    }

    ctx->pc = 0x154b10u;

    // 0x154b10: 0x2605079c  addiu       $a1, $s0, 0x79C
    ctx->pc = 0x154b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
    // 0x154b14: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x154b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154b18: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x154b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b1c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x154b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x154b20: 0x13300a  movz        $a2, $zero, $s3
    ctx->pc = 0x154b20u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x154b24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154b28: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x154b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154B2Cu;
    {
        const bool branch_taken_0x154b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B2Cu;
        // 0x154b30: 0x8cb10010  lw          $s1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b2c) {
            ctx->pc = 0x154B48u;
            return;
        }
    }
    ctx->pc = 0x154B34u;
    // 0x154b34: 0xc054016  jal         func_150058
    ctx->pc = 0x154B34u;
    SET_GPR_U32(ctx, 31, 0x154B3Cu);
    ctx->pc = 0x154B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B34u;
    // 0x154b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150058u, 0x154B34u, 0x154B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B3Cu;
label_154b3c:
    // 0x154b3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x154B3Cu;
    {
        const bool branch_taken_0x154b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B3Cu;
        // 0x154b40: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b3c) {
            ctx->pc = 0x154B80u;
            return;
        }
    }
    ctx->pc = 0x154B44u;
    // 0x154b44: 0x0  nop
    ctx->pc = 0x154b44u;
    // NOP
    ctx->pc = 0x154b48u;
}
