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

// Function: entry_00175454
// Address: 0x175454 - 0x175498
void entry_00175454_0x175454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175454_0x175454");
#endif

    switch (ctx->pc) {
        case 0x175478u: goto label_175478;
        case 0x17548cu: goto label_17548c;
        default: break;
    }

    ctx->pc = 0x175454u;

    // 0x175454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175458: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17545c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x175460: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x175460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x175464: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x175464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x175468: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x175468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17546c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17546cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x175470: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175470u;
    SET_GPR_U32(ctx, 31, 0x175478u);
    ctx->pc = 0x175474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175470u;
    // 0x175474: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175470u, 0x175478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175478u;
label_175478:
    // 0x175478: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x175478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17547c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17547Cu;
    {
        const bool branch_taken_0x17547c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17547Cu;
        // 0x175480: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17547c) {
            ctx->pc = 0x175498u;
            return;
        }
    }
    ctx->pc = 0x175484u;
    // 0x175484: 0xc05c246  jal         func_170918
    ctx->pc = 0x175484u;
    SET_GPR_U32(ctx, 31, 0x17548Cu);
    ctx->pc = 0x175488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175484u;
    // 0x175488: 0x24847840  addiu       $a0, $a0, 0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170918u, 0x175484u, 0x17548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17548Cu;
label_17548c:
    // 0x17548c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x17548Cu;
    {
        const bool branch_taken_0x17548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17548Cu;
        // 0x175490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17548c) {
            ctx->pc = 0x175610u;
            return;
        }
    }
    ctx->pc = 0x175494u;
    // 0x175494: 0x0  nop
    ctx->pc = 0x175494u;
    // NOP
    ctx->pc = 0x175498u;
}
