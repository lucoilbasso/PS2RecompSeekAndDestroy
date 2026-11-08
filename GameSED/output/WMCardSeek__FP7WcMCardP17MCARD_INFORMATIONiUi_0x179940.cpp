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

// Function: WMCardSeek__FP7WcMCardP17MCARD_INFORMATIONiUi
// Address: 0x179940 - 0x1799d8
void WMCardSeek__FP7WcMCardP17MCARD_INFORMATIONiUi_0x179940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardSeek__FP7WcMCardP17MCARD_INFORMATIONiUi_0x179940");
#endif

    switch (ctx->pc) {
        case 0x179970u: goto label_179970;
        case 0x17997cu: goto label_17997c;
        case 0x179998u: goto label_179998;
        default: break;
    }

    ctx->pc = 0x179940u;

    // 0x179940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179948: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x179948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17994c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x17994cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179950: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x179950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x179954: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x179954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179958: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x179958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17995c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17995cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179960: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x179960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x179964: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x179964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17996c: 0x0  nop
    ctx->pc = 0x17996cu;
    // NOP
label_179970:
    // 0x179970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179974: 0xc0714ec  jal         func_1C53B0
    ctx->pc = 0x179974u;
    SET_GPR_U32(ctx, 31, 0x17997Cu);
    ctx->pc = 0x179978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179974u;
    // 0x179978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53B0u, 0x179974u, 0x17997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17997Cu;
label_17997c:
    // 0x17997c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17997Cu;
    {
        const bool branch_taken_0x17997c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17997Cu;
        // 0x179980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17997c) {
            ctx->pc = 0x179970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179970;
        }
    }
    ctx->pc = 0x179984u;
    // 0x179984: 0x26504030  addiu       $s0, $s2, 0x4030
    ctx->pc = 0x179984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16432));
    // 0x179988: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17998c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17998cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179990: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179990u;
    SET_GPR_U32(ctx, 31, 0x179998u);
    ctx->pc = 0x179994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179990u;
    // 0x179994: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179990u, 0x179998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179998u;
label_179998:
    // 0x179998: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x179998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17999c: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17999Cu;
    {
        const bool branch_taken_0x17999c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1799A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17999Cu;
        // 0x1799a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17999c) {
            ctx->pc = 0x1799BCu;
            goto label_1799bc;
        }
    }
    ctx->pc = 0x1799A4u;
    // 0x1799a4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1799a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1799a8: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1799A8u;
    {
        const bool branch_taken_0x1799a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1799a8) {
            ctx->pc = 0x1799ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1799A8u;
            // 0x1799ac: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1799B0u;
            goto label_1799b0;
        }
    }
    ctx->pc = 0x1799B0u;
label_1799b0:
    // 0x1799b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1799b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1799b4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1799b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1799b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1799b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1799bc:
    // 0x1799bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1799bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1799c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1799c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1799c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1799c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1799c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1799c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1799cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1799ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1799d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1799D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1799D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799D0u;
        // 0x1799d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1799D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1799D8u;
}
