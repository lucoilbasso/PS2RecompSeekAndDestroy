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

// Function: entry_00164fb0
// Address: 0x164fb0 - 0x164ff0
void entry_00164fb0_0x164fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164fb0_0x164fb0");
#endif

    ctx->pc = 0x164fb0u;

label_164fb0:
    // 0x164fb0: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x164fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_164fb4:
    // 0x164fb4: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x164fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_164fb8:
    // 0x164fb8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x164fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_164fbc:
    // 0x164fbc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x164fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_164fc0:
    // 0x164fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_164fc4:
    // 0x164fc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x164fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_164fc8:
    // 0x164fc8: 0x2c83002c  sltiu       $v1, $a0, 0x2C
    ctx->pc = 0x164fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
label_164fcc:
    // 0x164fcc: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_164fd0:
    if (ctx->pc == 0x164FD0u) {
        ctx->pc = 0x164FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FCCu;
        // 0x164fd0: 0xac530c0c  sw          $s3, 0xC0C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3084), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FD4u;
        goto label_164fd4;
    }
    ctx->pc = 0x164FCCu;
    {
        const bool branch_taken_0x164fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FCCu;
        // 0x164fd0: 0xac530c0c  sw          $s3, 0xC0C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3084), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fcc) {
            ctx->pc = 0x165138u;
            return;
        }
    }
    ctx->pc = 0x164FD4u;
label_164fd4:
    // 0x164fd4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x164fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_164fd8:
    // 0x164fd8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x164fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_164fdc:
    // 0x164fdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x164fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_164fe0:
    // 0x164fe0: 0x8c637070  lw          $v1, 0x7070($v1)
    ctx->pc = 0x164fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28784)));
label_164fe4:
    // 0x164fe4: 0x600008  jr          $v1
label_164fe8:
    if (ctx->pc == 0x164FE8u) {
        ctx->pc = 0x164FECu;
        goto label_164fec;
    }
    ctx->pc = 0x164FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164FE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x164FECu;
label_164fec:
    // 0x164fec: 0x0  nop
    ctx->pc = 0x164fecu;
    // NOP
    ctx->pc = 0x164ff0u;
}
