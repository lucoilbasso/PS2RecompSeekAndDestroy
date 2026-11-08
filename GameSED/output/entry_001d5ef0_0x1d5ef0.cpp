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

// Function: entry_001d5ef0
// Address: 0x1d5ef0 - 0x1d5f68
void entry_001d5ef0_0x1d5ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5ef0_0x1d5ef0");
#endif

    switch (ctx->pc) {
        case 0x1d5f18u: goto label_1d5f18;
        default: break;
    }

    ctx->pc = 0x1d5ef0u;

    // 0x1d5ef0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5ef4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5ef8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d5ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d5efc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1d5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5f00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5f04: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x1d5f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d5f08: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x1d5f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1d5f0c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1d5f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5f10: 0xc07558c  jal         func_1D5630
    ctx->pc = 0x1D5F10u;
    SET_GPR_U32(ctx, 31, 0x1D5F18u);
    ctx->pc = 0x1D5F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F10u;
    // 0x1d5f14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5630u, 0x1D5F10u, 0x1D5F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F18u;
label_1d5f18:
    // 0x1d5f18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f1c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d5f20: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d5f24: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x1d5f24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d5f28: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D5F28u;
    {
        const bool branch_taken_0x1d5f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F28u;
        // 0x1d5f2c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f28) {
            ctx->pc = 0x1D5F98u;
            return;
        }
    }
    ctx->pc = 0x1D5F30u;
    // 0x1d5f30: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d5f34: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x1d5f38: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d5f3c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d5f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5f40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d5f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d5f44: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x1d5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d5f48: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x1d5f48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x1d5f4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d5f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d5f50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d5f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d5f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5f58: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x1d5f58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1d5f5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5F5Cu;
    {
        const bool branch_taken_0x1d5f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F5Cu;
        // 0x1d5f60: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f5c) {
            ctx->pc = 0x1D5F68u;
            return;
        }
    }
    ctx->pc = 0x1D5F64u;
    // 0x1d5f64: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x1d5f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    ctx->pc = 0x1d5f68u;
}
