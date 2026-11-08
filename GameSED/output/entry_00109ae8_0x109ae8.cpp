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

// Function: entry_00109ae8
// Address: 0x109ae8 - 0x109b40
void entry_00109ae8_0x109ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109ae8_0x109ae8");
#endif

    switch (ctx->pc) {
        case 0x109b00u: goto label_109b00;
        case 0x109b1cu: goto label_109b1c;
        case 0x109b34u: goto label_109b34;
        default: break;
    }

    ctx->pc = 0x109ae8u;

    // 0x109ae8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x109ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x109aec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x109aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x109af0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x109af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x109af4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x109af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x109af8: 0xc04110c  jal         func_104430
    ctx->pc = 0x109AF8u;
    SET_GPR_U32(ctx, 31, 0x109B00u);
    ctx->pc = 0x109AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AF8u;
    // 0x109afc: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109AF8u, 0x109B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B00u;
label_109b00:
    // 0x109b00: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x109b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109b04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109b0c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x109B0Cu;
    {
        const bool branch_taken_0x109b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109b0c) {
            ctx->pc = 0x109B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109B0Cu;
            // 0x109b10: 0x2462fffb  addiu       $v0, $v1, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109B40u;
            return;
        }
    }
    ctx->pc = 0x109B14u;
    // 0x109b14: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109B14u;
    SET_GPR_U32(ctx, 31, 0x109B1Cu);
    ctx->pc = 0x109B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B14u;
    // 0x109b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109B14u, 0x109B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B1Cu;
label_109b1c:
    // 0x109b1c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x109b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x109b20: 0x8c66b830  lw          $a2, -0x47D0($v1)
    ctx->pc = 0x109b20u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1FB830u));
    // 0x109b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b2c: 0xc0640d6  jal         func_190358
    ctx->pc = 0x109B2Cu;
    SET_GPR_U32(ctx, 31, 0x109B34u);
    ctx->pc = 0x109B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B2Cu;
    // 0x109b30: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x109B2Cu, 0x109B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B34u;
label_109b34:
    // 0x109b34: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x109B34u;
    {
        const bool branch_taken_0x109b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B34u;
        // 0x109b38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b34) {
            ctx->pc = 0x109BDCu;
            return;
        }
    }
    ctx->pc = 0x109B3Cu;
    // 0x109b3c: 0x0  nop
    ctx->pc = 0x109b3cu;
    // NOP
    ctx->pc = 0x109b40u;
}
