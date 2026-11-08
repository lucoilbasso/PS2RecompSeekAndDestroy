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

// Function: entry_001bad84
// Address: 0x1bad84 - 0x1badd8
void entry_001bad84_0x1bad84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bad84_0x1bad84");
#endif

    switch (ctx->pc) {
        case 0x1bad8cu: goto label_1bad8c;
        case 0x1bad98u: goto label_1bad98;
        case 0x1badacu: goto label_1badac;
        case 0x1badbcu: goto label_1badbc;
        default: break;
    }

    ctx->pc = 0x1bad84u;

    // 0x1bad84: 0xc06e810  jal         func_1BA040
    ctx->pc = 0x1BAD84u;
    SET_GPR_U32(ctx, 31, 0x1BAD8Cu);
    ctx->pc = 0x1BAD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD84u;
    // 0x1bad88: 0x3c130025  lui         $s3, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA040u, 0x1BAD84u, 0x1BAD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD8Cu;
label_1bad8c:
    // 0x1bad8c: 0x8e64c0ac  lw          $a0, -0x3F54($s3)
    ctx->pc = 0x1bad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951084)));
    // 0x1bad90: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1BAD90u;
    SET_GPR_U32(ctx, 31, 0x1BAD98u);
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1BAD90u, 0x1BAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD98u;
label_1bad98:
    // 0x1bad98: 0x8e63c0ac  lw          $v1, -0x3F54($s3)
    ctx->pc = 0x1bad98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951084)));
    // 0x1bad9c: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1BAD9Cu;
    {
        const bool branch_taken_0x1bad9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD9Cu;
        // 0x1bada0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad9c) {
            ctx->pc = 0x1BAF0Cu;
            return;
        }
    }
    ctx->pc = 0x1BADA4u;
    // 0x1bada4: 0xc06ea20  jal         func_1BA880
    ctx->pc = 0x1BADA4u;
    SET_GPR_U32(ctx, 31, 0x1BADACu);
    ctx->pc = 0x1BADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BADA4u;
    // 0x1bada8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA880u, 0x1BADA4u, 0x1BADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADACu;
label_1badac:
    // 0x1badac: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1BADACu;
    {
        const bool branch_taken_0x1badac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADACu;
        // 0x1badb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badac) {
            ctx->pc = 0x1BAEC4u;
            return;
        }
    }
    ctx->pc = 0x1BADB4u;
    // 0x1badb4: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1BADB4u;
    SET_GPR_U32(ctx, 31, 0x1BADBCu);
    ctx->pc = 0x1BADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BADB4u;
    // 0x1badb8: 0x3c110025  lui         $s1, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1BADB4u, 0x1BADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADBCu;
label_1badbc:
    // 0x1badbc: 0x8e22c0c4  lw          $v0, -0x3F3C($s1)
    ctx->pc = 0x1badbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951108)));
    // 0x1badc0: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BADC0u;
    {
        const bool branch_taken_0x1badc0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADC0u;
        // 0x1badc4: 0x3c150041  lui         $s5, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badc0) {
            ctx->pc = 0x1BAE74u;
            return;
        }
    }
    ctx->pc = 0x1BADC8u;
    // 0x1badc8: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1badc8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1badcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BADCCu;
    {
        const bool branch_taken_0x1badcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADCCu;
        // 0x1badd0: 0x3c170025  lui         $s7, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badcc) {
            ctx->pc = 0x1BADFCu;
            return;
        }
    }
    ctx->pc = 0x1BADD4u;
    // 0x1badd4: 0x0  nop
    ctx->pc = 0x1badd4u;
    // NOP
    ctx->pc = 0x1badd8u;
}
