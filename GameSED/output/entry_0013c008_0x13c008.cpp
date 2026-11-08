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

// Function: entry_0013c008
// Address: 0x13c008 - 0x13c048
void entry_0013c008_0x13c008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c008_0x13c008");
#endif

    switch (ctx->pc) {
        case 0x13c044u: goto label_13c044;
        default: break;
    }

    ctx->pc = 0x13c008u;

    // 0x13c008: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13c00c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x13c010: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13c010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13c014: 0x8e130018  lw          $s3, 0x18($s0)
    ctx->pc = 0x13c014u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13c018: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x13c018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x13c01c: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x13c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
    // 0x13c020: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x13C020u;
    {
        const bool branch_taken_0x13c020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C020u;
        // 0x13c024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c020) {
            ctx->pc = 0x13C19Cu;
            return;
        }
    }
    ctx->pc = 0x13C028u;
    // 0x13c028: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x13c028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13c02c: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x13c02cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13c030: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x13c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x13c034: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C034u;
    {
        const bool branch_taken_0x13c034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c034) {
            ctx->pc = 0x13C038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C034u;
            // 0x13c038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C048u;
            return;
        }
    }
    ctx->pc = 0x13C03Cu;
    // 0x13c03c: 0xc061920  jal         func_186480
    ctx->pc = 0x13C03Cu;
    SET_GPR_U32(ctx, 31, 0x13C044u);
    ctx->pc = 0x13C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C03Cu;
    // 0x13c040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x13C03Cu, 0x13C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C044u;
label_13c044:
    // 0x13c044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13c044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13c048u;
}
