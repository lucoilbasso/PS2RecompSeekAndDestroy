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

// Function: entry_001784ec
// Address: 0x1784ec - 0x178540
void entry_001784ec_0x1784ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001784ec_0x1784ec");
#endif

    switch (ctx->pc) {
        case 0x1784fcu: goto label_1784fc;
        case 0x17850cu: goto label_17850c;
        case 0x178520u: goto label_178520;
        case 0x178534u: goto label_178534;
        default: break;
    }

    ctx->pc = 0x1784ecu;

    // 0x1784ec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1784ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1784f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1784f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1784f4: 0xc05e2aa  jal         func_178AA8
    ctx->pc = 0x1784F4u;
    SET_GPR_U32(ctx, 31, 0x1784FCu);
    ctx->pc = 0x1784F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1784F4u;
    // 0x1784f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178AA8u, 0x1784F4u, 0x1784FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1784FCu;
label_1784fc:
    // 0x1784fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1784fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178500: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x178500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x178504: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x178504u;
    SET_GPR_U32(ctx, 31, 0x17850Cu);
    ctx->pc = 0x178508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178504u;
    // 0x178508: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x178504u, 0x17850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17850Cu;
label_17850c:
    // 0x17850c: 0xae221010  sw          $v0, 0x1010($s1)
    ctx->pc = 0x17850cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4112), GPR_U32(ctx, 2));
    // 0x178510: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x178510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178514: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x178514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x178518: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x178518u;
    SET_GPR_U32(ctx, 31, 0x178520u);
    ctx->pc = 0x17851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178518u;
    // 0x17851c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x178518u, 0x178520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178520u;
label_178520:
    // 0x178520: 0xae221014  sw          $v0, 0x1014($s1)
    ctx->pc = 0x178520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4116), GPR_U32(ctx, 2));
    // 0x178524: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x178524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x178528: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x178528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17852c: 0xc06e7b2  jal         func_1B9EC8
    ctx->pc = 0x17852Cu;
    SET_GPR_U32(ctx, 31, 0x178534u);
    ctx->pc = 0x178530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17852Cu;
    // 0x178530: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9EC8u, 0x17852Cu, 0x178534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178534u;
label_178534:
    // 0x178534: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x178534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x178538: 0xc06e742  jal         func_1B9D08
    ctx->pc = 0x178538u;
    SET_GPR_U32(ctx, 31, 0x178540u);
    ctx->pc = 0x17853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178538u;
    // 0x17853c: 0x248485b0  addiu       $a0, $a0, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D08u, 0x178538u, 0x178540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178540u;
}
