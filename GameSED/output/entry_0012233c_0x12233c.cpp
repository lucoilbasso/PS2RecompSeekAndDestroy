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

// Function: entry_0012233c
// Address: 0x12233c - 0x122380
void entry_0012233c_0x12233c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012233c_0x12233c");
#endif

    switch (ctx->pc) {
        case 0x12234cu: goto label_12234c;
        case 0x122354u: goto label_122354;
        default: break;
    }

    ctx->pc = 0x12233cu;

    // 0x12233c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12233cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x122344: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x122344u;
    SET_GPR_U32(ctx, 31, 0x12234Cu);
    ctx->pc = 0x122348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122344u;
    // 0x122348: 0x240401f6  addiu       $a0, $zero, 0x1F6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x122344u, 0x12234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12234Cu;
label_12234c:
    // 0x12234c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x12234Cu;
    SET_GPR_U32(ctx, 31, 0x122354u);
    ctx->pc = 0x122350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12234Cu;
    // 0x122350: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x12234Cu, 0x122354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122354u;
label_122354:
    // 0x122354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12235c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x12235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x122360: 0x2442e978  addiu       $v0, $v0, -0x1688
    ctx->pc = 0x122360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961528));
    // 0x122364: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x122364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x122368: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x122368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x12236c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12236cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122370: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x122370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x122374: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x122374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x122378: 0x26020168  addiu       $v0, $s0, 0x168
    ctx->pc = 0x122378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x12237c: 0x0  nop
    ctx->pc = 0x12237cu;
    // NOP
    ctx->pc = 0x122380u;
}
