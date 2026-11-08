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

// Function: entry_00143ae8
// Address: 0x143ae8 - 0x143b48
void entry_00143ae8_0x143ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143ae8_0x143ae8");
#endif

    switch (ctx->pc) {
        case 0x143b04u: goto label_143b04;
        case 0x143b0cu: goto label_143b0c;
        case 0x143b14u: goto label_143b14;
        case 0x143b34u: goto label_143b34;
        default: break;
    }

    ctx->pc = 0x143ae8u;

    // 0x143ae8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x143aec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x143aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143af4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x143af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x143af8: 0x8e51005c  lw          $s1, 0x5C($s2)
    ctx->pc = 0x143af8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x143afc: 0xc05fa10  jal         func_17E840
    ctx->pc = 0x143AFCu;
    SET_GPR_U32(ctx, 31, 0x143B04u);
    ctx->pc = 0x143B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AFCu;
    // 0x143b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E840u, 0x143AFCu, 0x143B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B04u;
label_143b04:
    // 0x143b04: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x143B04u;
    SET_GPR_U32(ctx, 31, 0x143B0Cu);
    ctx->pc = 0x143B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B04u;
    // 0x143b08: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x143B04u, 0x143B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B0Cu;
label_143b0c:
    // 0x143b0c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x143B0Cu;
    SET_GPR_U32(ctx, 31, 0x143B14u);
    ctx->pc = 0x143B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B0Cu;
    // 0x143b10: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x143B0Cu, 0x143B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B14u;
label_143b14:
    // 0x143b14: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x143b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x143b18: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x143b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b1c: 0x2a0201f5  slti        $v0, $s0, 0x1F5
    ctx->pc = 0x143b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x143b20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x143B20u;
    {
        const bool branch_taken_0x143b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B20u;
        // 0x143b24: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b20) {
            ctx->pc = 0x143B48u;
            return;
        }
    }
    ctx->pc = 0x143B28u;
    // 0x143b28: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x143b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x143b2c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x143B2Cu;
    SET_GPR_U32(ctx, 31, 0x143B34u);
    ctx->pc = 0x143B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B2Cu;
    // 0x143b30: 0x248469f0  addiu       $a0, $a0, 0x69F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x143B2Cu, 0x143B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B34u;
label_143b34:
    // 0x143b34: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x143b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x143b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b3c: 0x24a56a08  addiu       $a1, $a1, 0x6A08
    ctx->pc = 0x143b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27144));
    // 0x143b40: 0xc068186  jal         func_1A0618
    ctx->pc = 0x143B40u;
    SET_GPR_U32(ctx, 31, 0x143B48u);
    ctx->pc = 0x143B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B40u;
    // 0x143b44: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x143B40u, 0x143B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B48u;
}
