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

// Function: entry_00139ee4
// Address: 0x139ee4 - 0x139f48
void entry_00139ee4_0x139ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139ee4_0x139ee4");
#endif

    switch (ctx->pc) {
        case 0x139ef8u: goto label_139ef8;
        case 0x139f0cu: goto label_139f0c;
        case 0x139f20u: goto label_139f20;
        default: break;
    }

    ctx->pc = 0x139ee4u;

    // 0x139ee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139ee8: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x139ee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x139eec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x139eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x139ef0: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x139EF0u;
    SET_GPR_U32(ctx, 31, 0x139EF8u);
    ctx->pc = 0x139EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139EF0u;
    // 0x139ef4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x139EF0u, 0x139EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EF8u;
label_139ef8:
    // 0x139ef8: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x139ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x139efc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f00: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x139f00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139f04: 0xc06164c  jal         func_185930
    ctx->pc = 0x139F04u;
    SET_GPR_U32(ctx, 31, 0x139F0Cu);
    ctx->pc = 0x139F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F04u;
    // 0x139f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x139F04u, 0x139F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F0Cu;
label_139f0c:
    // 0x139f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x139f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f18: 0xc068866  jal         func_1A2198
    ctx->pc = 0x139F18u;
    SET_GPR_U32(ctx, 31, 0x139F20u);
    ctx->pc = 0x139F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F18u;
    // 0x139f1c: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x139F18u, 0x139F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F20u;
label_139f20:
    // 0x139f20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x139f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f28: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x139f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x139f2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x139f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139f34: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x139f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x139f38: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139F38u;
    {
        const bool branch_taken_0x139f38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x139F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F38u;
        // 0x139f3c: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f38) {
            ctx->pc = 0x139F48u;
            return;
        }
    }
    ctx->pc = 0x139F40u;
    // 0x139f40: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x139f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x139f44: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x139f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x139f48u;
}
