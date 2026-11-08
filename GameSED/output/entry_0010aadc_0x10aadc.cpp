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

// Function: entry_0010aadc
// Address: 0x10aadc - 0x10ab5c
void entry_0010aadc_0x10aadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aadc_0x10aadc");
#endif

    switch (ctx->pc) {
        case 0x10ab08u: goto label_10ab08;
        case 0x10ab14u: goto label_10ab14;
        case 0x10ab20u: goto label_10ab20;
        case 0x10ab30u: goto label_10ab30;
        case 0x10ab4cu: goto label_10ab4c;
        case 0x10ab58u: goto label_10ab58;
        default: break;
    }

    ctx->pc = 0x10aadcu;

    // 0x10aadc: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x10aadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x10aae0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x10aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x10aae4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x10aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x10aae8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x10aae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10aaec: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x10aaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x10aaf0: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x10aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x10aaf4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x10aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x10aaf8: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x10aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x10aafc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10ab00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB00u;
    SET_GPR_U32(ctx, 31, 0x10AB08u);
    ctx->pc = 0x10AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB00u;
    // 0x10ab04: 0x8c570044  lw          $s7, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB00u, 0x10AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB08u;
label_10ab08:
    // 0x10ab08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab0c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB0Cu;
    SET_GPR_U32(ctx, 31, 0x10AB14u);
    ctx->pc = 0x10AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB0Cu;
    // 0x10ab10: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB0Cu, 0x10AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB14u;
label_10ab14:
    // 0x10ab14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab18: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB18u;
    SET_GPR_U32(ctx, 31, 0x10AB20u);
    ctx->pc = 0x10AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB18u;
    // 0x10ab1c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB18u, 0x10AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB20u;
label_10ab20:
    // 0x10ab20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab24: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x10ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x10ab28: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB28u;
    SET_GPR_U32(ctx, 31, 0x10AB30u);
    ctx->pc = 0x10AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB28u;
    // 0x10ab2c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB28u, 0x10AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB30u;
label_10ab30:
    // 0x10ab30: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10ab34: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x10ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x10ab38: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x10ab38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x10ab3c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AB3Cu;
    {
        const bool branch_taken_0x10ab3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB3Cu;
        // 0x10ab40: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab3c) {
            ctx->pc = 0x10AB5Cu;
            return;
        }
    }
    ctx->pc = 0x10AB44u;
    // 0x10ab44: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB44u;
    SET_GPR_U32(ctx, 31, 0x10AB4Cu);
    ctx->pc = 0x10AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB44u;
    // 0x10ab48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB44u, 0x10AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB4Cu;
label_10ab4c:
    // 0x10ab4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab50: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB50u;
    SET_GPR_U32(ctx, 31, 0x10AB58u);
    ctx->pc = 0x10AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB50u;
    // 0x10ab54: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB50u, 0x10AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB58u;
label_10ab58:
    // 0x10ab58: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x10ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->pc = 0x10ab5cu;
}
