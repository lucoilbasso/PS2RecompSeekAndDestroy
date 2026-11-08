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

// Function: entry_001a6218
// Address: 0x1a6218 - 0x1a6270
void entry_001a6218_0x1a6218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6218_0x1a6218");
#endif

    switch (ctx->pc) {
        case 0x1a6230u: goto label_1a6230;
        case 0x1a6268u: goto label_1a6268;
        default: break;
    }

    ctx->pc = 0x1a6218u;

    // 0x1a6218: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a621c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6220: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6224: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6228: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6228u;
    SET_GPR_U32(ctx, 31, 0x1A6230u);
    ctx->pc = 0x1A622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6228u;
    // 0x1a622c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6228u, 0x1A6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6230u;
label_1a6230:
    // 0x1a6230: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a6230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a6234: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6238: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a6238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a623c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A623Cu;
    {
        const bool branch_taken_0x1a623c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A623Cu;
        // 0x1a6240: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a623c) {
            ctx->pc = 0x1A6288u;
            return;
        }
    }
    ctx->pc = 0x1A6244u;
    // 0x1a6244: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6248: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a624c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a624cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6250: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6254: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6258: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6258u;
    {
        const bool branch_taken_0x1a6258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6258u;
        // 0x1a625c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6258) {
            ctx->pc = 0x1A6270u;
            return;
        }
    }
    ctx->pc = 0x1A6260u;
    // 0x1a6260: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6260u;
    SET_GPR_U32(ctx, 31, 0x1A6268u);
    ctx->pc = 0x1A6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6260u;
    // 0x1a6264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6260u, 0x1A6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6268u;
label_1a6268:
    // 0x1a6268: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6268u;
    {
        const bool branch_taken_0x1a6268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6268u;
        // 0x1a626c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6268) {
            ctx->pc = 0x1A6274u;
            return;
        }
    }
    ctx->pc = 0x1A6270u;
}
