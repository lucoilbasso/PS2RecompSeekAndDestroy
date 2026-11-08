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

// Function: entry_00104920
// Address: 0x104920 - 0x104990
void entry_00104920_0x104920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104920_0x104920");
#endif

    switch (ctx->pc) {
        case 0x10494cu: goto label_10494c;
        default: break;
    }

    ctx->pc = 0x104920u;

    // 0x104920: 0xae130034  sw          $s3, 0x34($s0)
    ctx->pc = 0x104920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
    // 0x104924: 0x2451a430  addiu       $s1, $v0, -0x5BD0
    ctx->pc = 0x104924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x104928: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x104928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10492c: 0x8e221400  lw          $v0, 0x1400($s1)
    ctx->pc = 0x10492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5120)));
    // 0x104930: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x104930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104938: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x104938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10493c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x10493cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x104940: 0xac530040  sw          $s3, 0x40($v0)
    ctx->pc = 0x104940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 19));
    // 0x104944: 0xc060e56  jal         func_183958
    ctx->pc = 0x104944u;
    SET_GPR_U32(ctx, 31, 0x10494Cu);
    ctx->pc = 0x104948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104944u;
    // 0x104948: 0xac540048  sw          $s4, 0x48($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x104944u, 0x10494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10494Cu;
label_10494c:
    // 0x10494c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10494cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104950: 0x8e221400  lw          $v0, 0x1400($s1)
    ctx->pc = 0x104950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5120)));
    // 0x104954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104958: 0x24a53840  addiu       $a1, $a1, 0x3840
    ctx->pc = 0x104958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14400));
    // 0x10495c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x10495cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x104960: 0x1451000b  bne         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x104960u;
    {
        const bool branch_taken_0x104960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x104964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104960u;
        // 0x104964: 0x2443ffb0  addiu       $v1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104960) {
            ctx->pc = 0x104990u;
            return;
        }
    }
    ctx->pc = 0x104968u;
    // 0x104968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10496c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10496cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104974: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104978: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x104978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10497c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10497cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104980: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x104980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104984: 0x8068186  j           func_1A0618
    ctx->pc = 0x104984u;
    ctx->pc = 0x104988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104984u;
    // 0x104988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x10498Cu;
    // 0x10498c: 0x0  nop
    ctx->pc = 0x10498cu;
    // NOP
    ctx->pc = 0x104990u;
}
