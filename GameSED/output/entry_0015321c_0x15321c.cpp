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

// Function: entry_0015321c
// Address: 0x15321c - 0x153278
void entry_0015321c_0x15321c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015321c_0x15321c");
#endif

    switch (ctx->pc) {
        case 0x153224u: goto label_153224;
        case 0x153230u: goto label_153230;
        case 0x153260u: goto label_153260;
        case 0x153274u: goto label_153274;
        default: break;
    }

    ctx->pc = 0x15321cu;

    // 0x15321c: 0xc055a32  jal         func_1568C8
    ctx->pc = 0x15321Cu;
    SET_GPR_U32(ctx, 31, 0x153224u);
    ctx->pc = 0x153220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15321Cu;
    // 0x153220: 0x34128000  ori         $s2, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1568C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1568C8u, 0x15321Cu, 0x153224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153224u;
label_153224:
    // 0x153224: 0x162702  srl         $a0, $s6, 28
    ctx->pc = 0x153224u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 28));
    // 0x153228: 0xc055a32  jal         func_1568C8
    ctx->pc = 0x153228u;
    SET_GPR_U32(ctx, 31, 0x153230u);
    ctx->pc = 0x15322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153228u;
    // 0x15322c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1568C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1568C8u, 0x153228u, 0x153230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153230u;
label_153230:
    // 0x153230: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x153230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153234: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x153234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x153238: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x153238u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
    // 0x15323c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x15323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x153240: 0x32a30008  andi        $v1, $s5, 0x8
    ctx->pc = 0x153240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
    // 0x153244: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x153244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x153248: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x153248u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x15324c: 0xb20018  mult        $zero, $a1, $s2
    ctx->pc = 0x15324cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153250: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x153250u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x153254: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x153254u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x153258: 0xc058528  jal         func_1614A0
    ctx->pc = 0x153258u;
    SET_GPR_U32(ctx, 31, 0x153260u);
    ctx->pc = 0x15325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153258u;
    // 0x15325c: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614A0u, 0x153258u, 0x153260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153260u;
label_153260:
    // 0x153260: 0x8e24076c  lw          $a0, 0x76C($s1)
    ctx->pc = 0x153260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1900)));
    // 0x153264: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153264u;
    {
        const bool branch_taken_0x153264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x153264) {
            ctx->pc = 0x153268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153264u;
            // 0x153268: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153278u;
            return;
        }
    }
    ctx->pc = 0x15326Cu;
    // 0x15326c: 0xc061944  jal         func_186510
    ctx->pc = 0x15326Cu;
    SET_GPR_U32(ctx, 31, 0x153274u);
    ctx->pc = 0x186510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186510u, 0x15326Cu, 0x153274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153274u;
label_153274:
    // 0x153274: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x153274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    ctx->pc = 0x153278u;
}
