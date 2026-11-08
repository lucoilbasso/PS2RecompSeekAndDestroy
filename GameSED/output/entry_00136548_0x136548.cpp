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

// Function: entry_00136548
// Address: 0x136548 - 0x1365a0
void entry_00136548_0x136548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136548_0x136548");
#endif

    switch (ctx->pc) {
        case 0x136574u: goto label_136574;
        default: break;
    }

    ctx->pc = 0x136548u;

    // 0x136548: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13654c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13654cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136550: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13655c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x136560: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x136560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x136564: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x136564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x136568: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x13656c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13656Cu;
    SET_GPR_U32(ctx, 31, 0x136574u);
    ctx->pc = 0x136570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13656Cu;
    // 0x136570: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13656Cu, 0x136574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136574u;
label_136574:
    // 0x136574: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x136574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13657c: 0x12620018  beq         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13657Cu;
    {
        const bool branch_taken_0x13657c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x136580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13657Cu;
        // 0x136580: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13657c) {
            ctx->pc = 0x1365E0u;
            return;
        }
    }
    ctx->pc = 0x136584u;
    // 0x136584: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x136584u;
    {
        const bool branch_taken_0x136584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136584) {
            ctx->pc = 0x136588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136584u;
            // 0x136588: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1365A0u;
            return;
        }
    }
    ctx->pc = 0x13658Cu;
    // 0x13658c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x13658Cu;
    {
        const bool branch_taken_0x13658c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13658c) {
            ctx->pc = 0x1365B8u;
            return;
        }
    }
    ctx->pc = 0x136594u;
    // 0x136594: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x136594u;
    {
        const bool branch_taken_0x136594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136594u;
        // 0x136598: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136594) {
            ctx->pc = 0x136738u;
            return;
        }
    }
    ctx->pc = 0x13659Cu;
    // 0x13659c: 0x0  nop
    ctx->pc = 0x13659cu;
    // NOP
    ctx->pc = 0x1365a0u;
}
