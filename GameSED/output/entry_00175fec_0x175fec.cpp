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

// Function: entry_00175fec
// Address: 0x175fec - 0x176088
void entry_00175fec_0x175fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175fec_0x175fec");
#endif

    switch (ctx->pc) {
        case 0x175ffcu: goto label_175ffc;
        case 0x176008u: goto label_176008;
        case 0x176014u: goto label_176014;
        case 0x176020u: goto label_176020;
        case 0x176074u: goto label_176074;
        case 0x17607cu: goto label_17607c;
        default: break;
    }

    ctx->pc = 0x175fecu;

    // 0x175fec: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x175fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x175ff0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x175ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x175ff4: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x175FF4u;
    SET_GPR_U32(ctx, 31, 0x175FFCu);
    ctx->pc = 0x175FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FF4u;
    // 0x175ff8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x175FF4u, 0x175FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175FFCu;
label_175ffc:
    // 0x175ffc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x175ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176000: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x176000u;
    SET_GPR_U32(ctx, 31, 0x176008u);
    ctx->pc = 0x176004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176000u;
    // 0x176004: 0xaf828c50  sw          $v0, -0x73B0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x176000u, 0x176008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176008u;
label_176008:
    // 0x176008: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x176008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17600c: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x17600Cu;
    SET_GPR_U32(ctx, 31, 0x176014u);
    ctx->pc = 0x176010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17600Cu;
    // 0x176010: 0xaf828c54  sw          $v0, -0x73AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x17600Cu, 0x176014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176014u;
label_176014:
    // 0x176014: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x176014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x176018: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x176018u;
    SET_GPR_U32(ctx, 31, 0x176020u);
    ctx->pc = 0x17601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176018u;
    // 0x17601c: 0xaf828c58  sw          $v0, -0x73A8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x176018u, 0x176020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176020u;
label_176020:
    // 0x176020: 0x8f888c50  lw          $t0, -0x73B0($gp)
    ctx->pc = 0x176020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x176024: 0x8f868c54  lw          $a2, -0x73AC($gp)
    ctx->pc = 0x176024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x176028: 0x2409ffbf  addiu       $t1, $zero, -0x41
    ctx->pc = 0x176028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17602c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x17602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x176030: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x176030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176034: 0x8f878c58  lw          $a3, -0x73A8($gp)
    ctx->pc = 0x176034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x176038: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x176038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x17603c: 0xaf828c5c  sw          $v0, -0x73A4($gp)
    ctx->pc = 0x17603cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 2));
    // 0x176040: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x176040u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x176044: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x176044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x176048: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x176048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x17604c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x17604cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x176050: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x176050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x176054: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x176054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x176058: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x176058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x17605c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176060: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x176060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x176064: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176064u;
    {
        const bool branch_taken_0x176064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x176068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176064u;
        // 0x176068: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176064) {
            ctx->pc = 0x176088u;
            return;
        }
    }
    ctx->pc = 0x17606Cu;
    // 0x17606c: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x17606Cu;
    SET_GPR_U32(ctx, 31, 0x176074u);
    ctx->pc = 0x176070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17606Cu;
    // 0x176070: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x17606Cu, 0x176074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176074u;
label_176074:
    // 0x176074: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x176074u;
    SET_GPR_U32(ctx, 31, 0x17607Cu);
    ctx->pc = 0x176078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176074u;
    // 0x176078: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x176074u, 0x17607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17607Cu;
label_17607c:
    // 0x17607c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x17607Cu;
    {
        const bool branch_taken_0x17607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17607Cu;
        // 0x176080: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17607c) {
            ctx->pc = 0x176164u;
            return;
        }
    }
    ctx->pc = 0x176084u;
    // 0x176084: 0x0  nop
    ctx->pc = 0x176084u;
    // NOP
    ctx->pc = 0x176088u;
}
