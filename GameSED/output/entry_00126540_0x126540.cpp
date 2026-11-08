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

// Function: entry_00126540
// Address: 0x126540 - 0x126588
void entry_00126540_0x126540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126540_0x126540");
#endif

    switch (ctx->pc) {
        case 0x126548u: goto label_126548;
        default: break;
    }

    ctx->pc = 0x126540u;

label_126540:
    // 0x126540: 0xc049962  jal         func_126588
    ctx->pc = 0x126540u;
    SET_GPR_U32(ctx, 31, 0x126548u);
    ctx->pc = 0x126544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126540u;
    // 0x126544: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126588u, 0x126540u, 0x126548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126548u;
label_126548:
    // 0x126548: 0x641fffd  bgez        $s2, . + 4 + (-0x3 << 2)
    ctx->pc = 0x126548u;
    {
        const bool branch_taken_0x126548 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x12654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126548u;
        // 0x12654c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126548) {
            ctx->pc = 0x126540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126540;
        }
    }
    ctx->pc = 0x126550u;
    // 0x126550: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x126550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126554: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x126554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126558: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x126558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12655c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x12655cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x126560: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x126560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126564: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x126564u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x126568: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x126568u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12656c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x12656cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x126570: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x126570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x126574: 0xc7b60098  lwc1        $f22, 0x98($sp)
    ctx->pc = 0x126574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x126578: 0xc7b50090  lwc1        $f21, 0x90($sp)
    ctx->pc = 0x126578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12657c: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x12657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x126580: 0x3e00008  jr          $ra
    ctx->pc = 0x126580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126580u;
        // 0x126584: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126588u;
}
