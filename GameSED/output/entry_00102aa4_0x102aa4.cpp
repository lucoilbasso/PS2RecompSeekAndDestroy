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

// Function: entry_00102aa4
// Address: 0x102aa4 - 0x102b08
void entry_00102aa4_0x102aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102aa4_0x102aa4");
#endif

    switch (ctx->pc) {
        case 0x102ab8u: goto label_102ab8;
        case 0x102ae0u: goto label_102ae0;
        case 0x102ae8u: goto label_102ae8;
        case 0x102b00u: goto label_102b00;
        default: break;
    }

    ctx->pc = 0x102aa4u;

    // 0x102aa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102aa8: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x102aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x102aac: 0x32910f00  andi        $s1, $s4, 0xF00
    ctx->pc = 0x102aacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3840);
    // 0x102ab0: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x102AB0u;
    SET_GPR_U32(ctx, 31, 0x102AB8u);
    ctx->pc = 0x102AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AB0u;
    // 0x102ab4: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x102AB0u, 0x102AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AB8u;
label_102ab8:
    // 0x102ab8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x102ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x102abc: 0x118a03  sra         $s1, $s1, 8
    ctx->pc = 0x102abcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 8));
    // 0x102ac0: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x102ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x102ac4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x102ac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ac8: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x102ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x102acc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x102accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ad0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x102ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ad8: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x102AD8u;
    SET_GPR_U32(ctx, 31, 0x102AE0u);
    ctx->pc = 0x102ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AD8u;
    // 0x102adc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x102AD8u, 0x102AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AE0u;
label_102ae0:
    // 0x102ae0: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x102AE0u;
    SET_GPR_U32(ctx, 31, 0x102AE8u);
    ctx->pc = 0x102AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AE0u;
    // 0x102ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x102AE0u, 0x102AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AE8u;
label_102ae8:
    // 0x102ae8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x102ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102aec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102af0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102af4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x102af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102af8: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x102AF8u;
    SET_GPR_U32(ctx, 31, 0x102B00u);
    ctx->pc = 0x102AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AF8u;
    // 0x102afc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x102AF8u, 0x102B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B00u;
label_102b00:
    // 0x102b00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x102B00u;
    {
        const bool branch_taken_0x102b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B00u;
        // 0x102b04: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b00) {
            ctx->pc = 0x102B60u;
            return;
        }
    }
    ctx->pc = 0x102B08u;
}
