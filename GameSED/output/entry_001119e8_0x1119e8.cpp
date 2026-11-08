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

// Function: entry_001119e8
// Address: 0x1119e8 - 0x111a58
void entry_001119e8_0x1119e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001119e8_0x1119e8");
#endif

    switch (ctx->pc) {
        case 0x111a04u: goto label_111a04;
        case 0x111a10u: goto label_111a10;
        default: break;
    }

    ctx->pc = 0x1119e8u;

    // 0x1119e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1119e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1119ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1119ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1119f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1119f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1119f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1119f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1119f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1119fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1119FCu;
    SET_GPR_U32(ctx, 31, 0x111A04u);
    ctx->pc = 0x111A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119FCu;
    // 0x111a00: 0x8c52b830  lw          $s2, -0x47D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1119FCu, 0x111A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A04u;
label_111a04:
    // 0x111a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a08: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111A08u;
    SET_GPR_U32(ctx, 31, 0x111A10u);
    ctx->pc = 0x111A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A08u;
    // 0x111a0c: 0x27b00004  addiu       $s0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111A08u, 0x111A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A10u;
label_111a10:
    // 0x111a10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x111a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111a14: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x111a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x111a18: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x111a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x111a1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x111a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x111a20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x111a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a28: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x111a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x111a2c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x111a2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x111a30: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x111A30u;
    {
        const bool branch_taken_0x111a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x111A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A30u;
        // 0x111a34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a30) {
            ctx->pc = 0x111A70u;
            return;
        }
    }
    ctx->pc = 0x111A38u;
    // 0x111a38: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x111a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x111a3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111A3Cu;
    {
        const bool branch_taken_0x111a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A3Cu;
        // 0x111a40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a3c) {
            ctx->pc = 0x111A58u;
            return;
        }
    }
    ctx->pc = 0x111A44u;
    // 0x111a44: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x111A44u;
    {
        const bool branch_taken_0x111a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A44u;
        // 0x111a48: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a44) {
            ctx->pc = 0x111A68u;
            return;
        }
    }
    ctx->pc = 0x111A4Cu;
    // 0x111a4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x111A4Cu;
    {
        const bool branch_taken_0x111a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A4Cu;
        // 0x111a50: 0x2442fffa  addiu       $v0, $v0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a4c) {
            ctx->pc = 0x111A84u;
            return;
        }
    }
    ctx->pc = 0x111A54u;
    // 0x111a54: 0x0  nop
    ctx->pc = 0x111a54u;
    // NOP
    ctx->pc = 0x111a58u;
}
