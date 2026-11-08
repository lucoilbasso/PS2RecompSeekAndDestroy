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

// Function: entry_00102b08
// Address: 0x102b08 - 0x102b60
void entry_00102b08_0x102b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102b08_0x102b08");
#endif

    switch (ctx->pc) {
        case 0x102b14u: goto label_102b14;
        case 0x102b24u: goto label_102b24;
        case 0x102b30u: goto label_102b30;
        case 0x102b40u: goto label_102b40;
        case 0x102b50u: goto label_102b50;
        case 0x102b58u: goto label_102b58;
        default: break;
    }

    ctx->pc = 0x102b08u;

    // 0x102b08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b0c: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x102B0Cu;
    SET_GPR_U32(ctx, 31, 0x102B14u);
    ctx->pc = 0x102B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B0Cu;
    // 0x102b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x102B0Cu, 0x102B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B14u;
label_102b14:
    // 0x102b14: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x102b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x102b18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b1c: 0xc067392  jal         func_19CE48
    ctx->pc = 0x102B1Cu;
    SET_GPR_U32(ctx, 31, 0x102B24u);
    ctx->pc = 0x102B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B1Cu;
    // 0x102b20: 0x24a5cf30  addiu       $a1, $a1, -0x30D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x102B1Cu, 0x102B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B24u;
label_102b24:
    // 0x102b24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x102b24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b28: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x102B28u;
    SET_GPR_U32(ctx, 31, 0x102B30u);
    ctx->pc = 0x102B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B28u;
    // 0x102b2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x102B28u, 0x102B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B30u;
label_102b30:
    // 0x102b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b38: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x102B38u;
    SET_GPR_U32(ctx, 31, 0x102B40u);
    ctx->pc = 0x102B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B38u;
    // 0x102b3c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x102B38u, 0x102B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B40u;
label_102b40:
    // 0x102b40: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x102b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x102b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b48: 0xc067374  jal         func_19CDD0
    ctx->pc = 0x102B48u;
    SET_GPR_U32(ctx, 31, 0x102B50u);
    ctx->pc = 0x102B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B48u;
    // 0x102b4c: 0x24a5cf38  addiu       $a1, $a1, -0x30C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDD0u, 0x102B48u, 0x102B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B50u;
label_102b50:
    // 0x102b50: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x102B50u;
    SET_GPR_U32(ctx, 31, 0x102B58u);
    ctx->pc = 0x102B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B50u;
    // 0x102b54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x102B50u, 0x102B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B58u;
label_102b58:
    // 0x102b58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x102b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102b60u;
}
