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

// Function: entry_001989f0
// Address: 0x1989f0 - 0x198a38
void entry_001989f0_0x1989f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001989f0_0x1989f0");
#endif

    switch (ctx->pc) {
        case 0x198a1cu: goto label_198a1c;
        case 0x198a30u: goto label_198a30;
        default: break;
    }

    ctx->pc = 0x1989f0u;

    // 0x1989f0: 0x94a20150  lhu         $v0, 0x150($a1)
    ctx->pc = 0x1989f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x1989f4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1989f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1989f8: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1989F8u;
    {
        const bool branch_taken_0x1989f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1989f8) {
            ctx->pc = 0x1989FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1989F8u;
            // 0x1989fc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198A88u;
            return;
        }
    }
    ctx->pc = 0x198A00u;
    // 0x198a00: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x198a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x198a04: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x198a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x198a08: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x198A08u;
    {
        const bool branch_taken_0x198a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198a08) {
            ctx->pc = 0x198A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198A08u;
            // 0x198a0c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198A88u;
            return;
        }
    }
    ctx->pc = 0x198A10u;
    // 0x198a10: 0x8ca601a8  lw          $a2, 0x1A8($a1)
    ctx->pc = 0x198a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 424)));
    // 0x198a14: 0xc065f7a  jal         func_197DE8
    ctx->pc = 0x198A14u;
    SET_GPR_U32(ctx, 31, 0x198A1Cu);
    ctx->pc = 0x198A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A14u;
    // 0x198a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197DE8u, 0x198A14u, 0x198A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A1Cu;
label_198a1c:
    // 0x198a1c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x198A1Cu;
    {
        const bool branch_taken_0x198a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A1Cu;
        // 0x198a20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a1c) {
            ctx->pc = 0x198A84u;
            return;
        }
    }
    ctx->pc = 0x198A24u;
    // 0x198a24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x198a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a28: 0xc0663f0  jal         func_198FC0
    ctx->pc = 0x198A28u;
    SET_GPR_U32(ctx, 31, 0x198A30u);
    ctx->pc = 0x198A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A28u;
    // 0x198a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FC0u, 0x198A28u, 0x198A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A30u;
label_198a30:
    // 0x198a30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198a34: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x198a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x198a38u;
}
