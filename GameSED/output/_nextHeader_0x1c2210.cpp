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

// Function: _nextHeader
// Address: 0x1c2210 - 0x1c231c
void _nextHeader_0x1c2210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_nextHeader_0x1c2210");
#endif

    switch (ctx->pc) {
        case 0x1c2250u: goto label_1c2250;
        case 0x1c2258u: goto label_1c2258;
        case 0x1c2264u: goto label_1c2264;
        case 0x1c22a8u: goto label_1c22a8;
        case 0x1c22b8u: goto label_1c22b8;
        case 0x1c22c8u: goto label_1c22c8;
        case 0x1c22e0u: goto label_1c22e0;
        default: break;
    }

    ctx->pc = 0x1c2210u;

    // 0x1c2210: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c2210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c2214: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1c2214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1c2218: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1c2218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1c221c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1c221cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c2220: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1c2220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1c2224: 0x241501b3  addiu       $s5, $zero, 0x1B3
    ctx->pc = 0x1c2224u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x1c2228: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1c2228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1c222c: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x1c222cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2230: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c2230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c2234: 0x241301b7  addiu       $s3, $zero, 0x1B7
    ctx->pc = 0x1c2234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x1c2238: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1c2238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1c223c: 0x241201b8  addiu       $s2, $zero, 0x1B8
    ctx->pc = 0x1c223cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x1c2240: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c2240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c2244: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1c2244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c2248: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c2248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c224c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c224cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2250:
    // 0x1c2250: 0xc07084a  jal         func_1C2128
    ctx->pc = 0x1C2250u;
    SET_GPR_U32(ctx, 31, 0x1C2258u);
    ctx->pc = 0x1C2254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2250u;
    // 0x1c2254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2128u, 0x1C2250u, 0x1C2258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2258u;
label_1c2258:
    // 0x1c2258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c225c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C225Cu;
    SET_GPR_U32(ctx, 31, 0x1C2264u);
    ctx->pc = 0x1C2260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C225Cu;
    // 0x1c2260: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C225Cu, 0x1C2264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2264u;
label_1c2264:
    // 0x1c2264: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c2264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2268: 0x1075000d  beq         $v1, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2268u;
    {
        const bool branch_taken_0x1c2268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1C226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2268u;
        // 0x1c226c: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2268) {
            ctx->pc = 0x1C22A0u;
            goto label_1c22a0;
        }
    }
    ctx->pc = 0x1C2270u;
    // 0x1c2270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2270u;
    {
        const bool branch_taken_0x1c2270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2270) {
            ctx->pc = 0x1C2288u;
            goto label_1c2288;
        }
    }
    ctx->pc = 0x1C2278u;
    // 0x1c2278: 0x10740011  beq         $v1, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2278u;
    {
        const bool branch_taken_0x1c2278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x1c2278) {
            ctx->pc = 0x1C22C0u;
            goto label_1c22c0;
        }
    }
    ctx->pc = 0x1C2280u;
    // 0x1c2280: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C2280u;
    {
        const bool branch_taken_0x1c2280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2280) {
            ctx->pc = 0x1C2250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2250;
        }
    }
    ctx->pc = 0x1C2288u;
label_1c2288:
    // 0x1c2288: 0x1073001a  beq         $v1, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C2288u;
    {
        const bool branch_taken_0x1c2288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1C228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2288u;
        // 0x1c228c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2288) {
            ctx->pc = 0x1C22F4u;
            goto label_1c22f4;
        }
    }
    ctx->pc = 0x1C2290u;
    // 0x1c2290: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2290u;
    {
        const bool branch_taken_0x1c2290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1c2290) {
            ctx->pc = 0x1C22B0u;
            goto label_1c22b0;
        }
    }
    ctx->pc = 0x1C2298u;
    // 0x1c2298: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C2298u;
    {
        const bool branch_taken_0x1c2298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2298) {
            ctx->pc = 0x1C2250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2250;
        }
    }
    ctx->pc = 0x1C22A0u;
label_1c22a0:
    // 0x1c22a0: 0xc06f8fe  jal         func_1BE3F8
    ctx->pc = 0x1C22A0u;
    SET_GPR_U32(ctx, 31, 0x1C22A8u);
    ctx->pc = 0x1C22A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22A0u;
    // 0x1c22a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3F8u, 0x1C22A0u, 0x1C22A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22A8u;
label_1c22a8:
    // 0x1c22a8: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C22A8u;
    {
        const bool branch_taken_0x1c22a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c22a8) {
            ctx->pc = 0x1C2250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2250;
        }
    }
    ctx->pc = 0x1C22B0u;
label_1c22b0:
    // 0x1c22b0: 0xc0709f0  jal         func_1C27C0
    ctx->pc = 0x1C22B0u;
    SET_GPR_U32(ctx, 31, 0x1C22B8u);
    ctx->pc = 0x1C22B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22B0u;
    // 0x1c22b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27C0u, 0x1C22B0u, 0x1C22B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22B8u;
label_1c22b8:
    // 0x1c22b8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C22B8u;
    {
        const bool branch_taken_0x1c22b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c22b8) {
            ctx->pc = 0x1C2250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2250;
        }
    }
    ctx->pc = 0x1C22C0u;
label_1c22c0:
    // 0x1c22c0: 0xc0708c8  jal         func_1C2320
    ctx->pc = 0x1C22C0u;
    SET_GPR_U32(ctx, 31, 0x1C22C8u);
    ctx->pc = 0x1C22C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22C0u;
    // 0x1c22c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2320u, 0x1C22C0u, 0x1C22C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22C8u;
label_1c22c8:
    // 0x1c22c8: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1c22c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1c22cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c22ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22d0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1c22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x1c22d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c22d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c22d8: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C22D8u;
    SET_GPR_U32(ctx, 31, 0x1C22E0u);
    ctx->pc = 0x1C22DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22D8u;
    // 0x1c22dc: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C22D8u, 0x1C22E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22E0u;
label_1c22e0:
    // 0x1c22e0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1c22e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c22e4: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x1c22e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c22e8: 0xfe020830  sd          $v0, 0x830($s0)
    ctx->pc = 0x1c22e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2096), GPR_U64(ctx, 2));
    // 0x1c22ec: 0xfe030828  sd          $v1, 0x828($s0)
    ctx->pc = 0x1c22ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2088), GPR_U64(ctx, 3));
    // 0x1c22f0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1c22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1c22f4:
    // 0x1c22f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c22f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c22f8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1c22f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c22fc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1c22fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c2300: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1c2300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c2304: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1c2304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2308: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c2308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c230c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1c230cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2310: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c2310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2314: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2314u;
        // 0x1c2318: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C231Cu;
}
