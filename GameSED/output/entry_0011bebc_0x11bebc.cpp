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

// Function: entry_0011bebc
// Address: 0x11bebc - 0x11bf14
void entry_0011bebc_0x11bebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bebc_0x11bebc");
#endif

    switch (ctx->pc) {
        case 0x11bee8u: goto label_11bee8;
        case 0x11bf08u: goto label_11bf08;
        default: break;
    }

    ctx->pc = 0x11bebcu;

    // 0x11bebc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x11bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x11bec0: 0xb08021  addu        $s0, $a1, $s0
    ctx->pc = 0x11bec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x11bec4: 0x24b44600  addiu       $s4, $a1, 0x4600
    ctx->pc = 0x11bec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 17920));
    // 0x11bec8: 0x26b10c08  addiu       $s1, $s5, 0xC08
    ctx->pc = 0x11bec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 3080));
    // 0x11becc: 0x8cc23624  lw          $v0, 0x3624($a2)
    ctx->pc = 0x11beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13860)));
    // 0x11bed0: 0x26104e00  addiu       $s0, $s0, 0x4E00
    ctx->pc = 0x11bed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19968));
    // 0x11bed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bed8: 0xacc23624  sw          $v0, 0x3624($a2)
    ctx->pc = 0x11bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 13860), GPR_U32(ctx, 2));
    // 0x11bedc: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11bee0: 0xc04523e  jal         func_1148F8
    ctx->pc = 0x11BEE0u;
    SET_GPR_U32(ctx, 31, 0x11BEE8u);
    ctx->pc = 0x11BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEE0u;
    // 0x11bee4: 0x2457c180  addiu       $s7, $v0, -0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0x11BEE0u, 0x11BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEE8u;
label_11bee8:
    // 0x11bee8: 0x26a31cb0  addiu       $v1, $s5, 0x1CB0
    ctx->pc = 0x11bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 7344));
    // 0x11beec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bef0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bef4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x11bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x11bef8: 0x240524d0  addiu       $a1, $zero, 0x24D0
    ctx->pc = 0x11bef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11befc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11befcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bf00: 0xc045352  jal         func_114D48
    ctx->pc = 0x11BF00u;
    SET_GPR_U32(ctx, 31, 0x11BF08u);
    ctx->pc = 0x11BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF00u;
    // 0x11bf04: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D48u, 0x11BF00u, 0x11BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF08u;
label_11bf08:
    // 0x11bf08: 0x26a324c0  addiu       $v1, $s5, 0x24C0
    ctx->pc = 0x11bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 9408));
    // 0x11bf0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11bf10: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x11bf10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11bf14u;
}
