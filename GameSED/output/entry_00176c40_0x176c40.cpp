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

// Function: entry_00176c40
// Address: 0x176c40 - 0x176cd0
void entry_00176c40_0x176c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176c40_0x176c40");
#endif

    switch (ctx->pc) {
        case 0x176c8cu: goto label_176c8c;
        case 0x176ca0u: goto label_176ca0;
        case 0x176cc4u: goto label_176cc4;
        default: break;
    }

    ctx->pc = 0x176c40u;

    // 0x176c40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x176c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x176c44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x176c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x176c48: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x176c48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176c4c: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x176c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x176c50: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x176c50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x176c54: 0x65880a  movz        $s1, $v1, $a1
    ctx->pc = 0x176c54u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x176c58: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x176c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x176c5c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x176c5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x176c60: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x176c60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x176c64: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x176c64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x176c68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x176c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x176c6c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x176c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x176c70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x176c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x176c74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x176c74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x176c78: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x176c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x176c7c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x176c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x176c80: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x176c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x176c84: 0xc06aa42  jal         func_1AA908
    ctx->pc = 0x176C84u;
    SET_GPR_U32(ctx, 31, 0x176C8Cu);
    ctx->pc = 0x176C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C84u;
    // 0x176c88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA908u, 0x176C84u, 0x176C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C8Cu;
label_176c8c:
    // 0x176c8c: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x176C8Cu;
    {
        const bool branch_taken_0x176c8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C8Cu;
        // 0x176c90: 0x26220140  addiu       $v0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c8c) {
            ctx->pc = 0x176D68u;
            return;
        }
    }
    ctx->pc = 0x176C94u;
    // 0x176c94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c98: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x176C98u;
    SET_GPR_U32(ctx, 31, 0x176CA0u);
    ctx->pc = 0x176C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C98u;
    // 0x176c9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x176C98u, 0x176CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CA0u;
label_176ca0:
    // 0x176ca0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x176ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x176ca4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x176ca4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176ca8: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x176ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x176cac: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x176cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x176cb0: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x176cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x176cb4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x176cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x176cb8: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x176cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176cbc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176CBCu;
    SET_GPR_U32(ctx, 31, 0x176CC4u);
    ctx->pc = 0x176CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CBCu;
    // 0x176cc0: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176CBCu, 0x176CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CC4u;
label_176cc4:
    // 0x176cc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x176cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x176cc8: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x176cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x176ccc: 0x0  nop
    ctx->pc = 0x176cccu;
    // NOP
    ctx->pc = 0x176cd0u;
}
