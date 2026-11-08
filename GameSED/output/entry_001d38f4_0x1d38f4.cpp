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

// Function: entry_001d38f4
// Address: 0x1d38f4 - 0x1d3970
void entry_001d38f4_0x1d38f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d38f4_0x1d38f4");
#endif

    switch (ctx->pc) {
        case 0x1d394cu: goto label_1d394c;
        case 0x1d395cu: goto label_1d395c;
        default: break;
    }

    ctx->pc = 0x1d38f4u;

    // 0x1d38f4: 0x460006a  bltz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x1D38F4u;
    {
        const bool branch_taken_0x1d38f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38F4u;
        // 0x1d38f8: 0x2bc2000f  slti        $v0, $fp, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38f4) {
            ctx->pc = 0x1D3AA0u;
            return;
        }
    }
    ctx->pc = 0x1D38FCu;
    // 0x1d38fc: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1D38FCu;
    {
        const bool branch_taken_0x1d38fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38FCu;
        // 0x1d3900: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38fc) {
            ctx->pc = 0x1D3AA4u;
            return;
        }
    }
    ctx->pc = 0x1D3904u;
    // 0x1d3904: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1d3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1d3908: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x1d3908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1d390c: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x1d390cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x1d3910: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d3910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d3914: 0xde31c680  ld          $s1, -0x3980($s1)
    ctx->pc = 0x1d3914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294952576)));
    // 0x1d3918: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D3918u;
    {
        const bool branch_taken_0x1d3918 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3918u;
        // 0x1d391c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3918) {
            ctx->pc = 0x1D3970u;
            return;
        }
    }
    ctx->pc = 0x1D3920u;
    // 0x1d3920: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d3920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3924: 0x1c800012  bgtz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3924u;
    {
        const bool branch_taken_0x1d3924 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1d3924) {
            ctx->pc = 0x1D3970u;
            return;
        }
    }
    ctx->pc = 0x1D392Cu;
    // 0x1d392c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1d392cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1d3930: 0x480013b  bltz        $a0, . + 4 + (0x13B << 2)
    ctx->pc = 0x1D3930u;
    {
        const bool branch_taken_0x1d3930 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3930u;
        // 0x1d3934: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3930) {
            ctx->pc = 0x1D3E20u;
            return;
        }
    }
    ctx->pc = 0x1D3938u;
    // 0x1d3938: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x1d3938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1d393c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d393cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d3940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3944: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3944u;
    SET_GPR_U32(ctx, 31, 0x1D394Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3944u, 0x1D394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D394Cu;
label_1d394c:
    // 0x1d394c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3950: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3954: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3954u;
    SET_GPR_U32(ctx, 31, 0x1D395Cu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3954u, 0x1D395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D395Cu;
label_1d395c:
    // 0x1d395c: 0x18400131  blez        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x1D395Cu;
    {
        const bool branch_taken_0x1d395c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D395Cu;
        // 0x1d3960: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d395c) {
            ctx->pc = 0x1D3E24u;
            return;
        }
    }
    ctx->pc = 0x1D3964u;
    // 0x1d3964: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x1D3964u;
    {
        const bool branch_taken_0x1d3964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3964u;
        // 0x1d3968: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3964) {
            ctx->pc = 0x1D3E30u;
            return;
        }
    }
    ctx->pc = 0x1D396Cu;
    // 0x1d396c: 0x0  nop
    ctx->pc = 0x1d396cu;
    // NOP
    ctx->pc = 0x1d3970u;
}
